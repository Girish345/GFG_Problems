//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution {
  public:
    long long maxPossibleValue(int n,vector<int> a, vector<int> b) {
        // code here
        
          long long ans=0;
        int mini=1e9;
        int sticks=0;
        for(int i=0;i<n;i++)
        {
            if(b[i]%2) b[i]--;
            if(b[i]>0)
            {
                sticks+=b[i];
                ans+=a[i]*b[i];
                mini=min(a[i],mini);
            }
        }
        if(sticks%4!=0)
        {
            ans-=2*mini;
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin>>N;
        vector<int> A(N), B(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        for(int i=0;i<N;i++){
          cin>>B[i];
        }
        Solution obj;
        auto ans = obj.maxPossibleValue(N,A,B);
        cout<<ans<<endl;
    }
} 
// } Driver Code Ends