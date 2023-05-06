//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

class Array {
  public:
    template <class T>
    static void input(vector<T> &A, int n) {
        for (int i = 0; i < n; i++) {
            scanf("%d ", &A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A) {
        for (int i = 0; i < A.size(); i++) {
            cout << A[i] << " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends
class Solution {
  public:
    bool solve(vector<vector<int>>&dp,int n,int k,int target,vector<int>&coins){
      
      if(target==0){
          if(k==0)return 1;
          return 0;
      }
      if(target<0|| k<0)return 0;
       if(n<0){
            return false;
        }
       
        if(dp[target][k]!=-1){
            return dp[target][k];
        }
        bool take= solve(dp,n,k-1,target-coins[n],coins);
        bool nottake= solve(dp,n-1,k,target,coins);
        return dp[target][k]=(take||nottake);  
    }
    bool makeChanges(int N, int K, int target, vector<int> &coins) {
        // code here
        vector<vector<int>>dp(target+1,vector<int>(K+1,-1));
        return solve(dp,N-1,K,target,coins);
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    scanf("%d ", &t);
    while (t--) {

        int N;
        scanf("%d", &N);

        int K;
        scanf("%d", &K);

        int target;
        scanf("%d", &target);

        vector<int> coins(N);
        Array::input(coins, N);

        Solution obj;
        bool res = obj.makeChanges(N, K, target, coins);

        cout << res << endl;
    }
}

// } Driver Code Ends