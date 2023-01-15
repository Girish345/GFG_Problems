//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
   void help(vector<int>&v,vector<vector<int>>&ans,vector<int>candidates,int m,int target,int n){
        if(m>n){
            return;
        }
        if(target==0){
            ans.push_back(v);
            return;
        }

        if(target<0){
            return;
        }

        for(int i=m;i<n;i++){
            v.push_back(candidates[i]);
            help(v,ans,candidates,i+1,target-candidates[i],n);

            while(i<n-1 && candidates[i]==candidates[i+1]){
                i++;
            }

            v.pop_back();
        }
    }
        
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
      
       int n=candidates.size();
       vector<int>v;
       vector<vector<int>>ans;
        sort(candidates.begin(),candidates.end());
       help(v,ans,candidates,0,target,n);
       return ans;
    }
};

//{ Driver Code Starts.
int main() {

    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> candidates(n);
        for (int i = 0; i < n; ++i) {
            cin >> candidates[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;

        vector<vector<int>> comb = obj.combinationSum2(candidates, k);
        sort(comb.begin(), comb.end());
        cout << "[ ";
        for (int i = 0; i < comb.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < comb[i].size(); j++) {
                cout << comb[i][j] << " ";
            }
            cout << "]";
        }
        cout << " ]\n";

        // cout << "\n~\n";
    }
    fclose(stdout);
    return 0;
}

// } Driver Code Ends