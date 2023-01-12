//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    
   void solve(vector<vector<int>>&v,int i,vector<int>&nums,vector<int>&op){

        if(i==nums.size()){
            v.push_back(op);
            return;
        }
      else{ 
          //pick that element
        op.push_back(nums[i]);
        solve(v,i+1,nums,op);
        op.pop_back();
        

        //neglect element and also repetative subset
        while(i+1<nums.size() && nums[i]==nums[i+1]){
            i++;
        }
        
        
        solve(v,i+1,nums,op);

      }
        
    


    }

  public:
    vector<vector<int>> printUniqueSubsets(vector<int>& nums) {
        // Write your code here
        sort(nums.begin(),nums.end());
        vector<vector<int>>v;
        vector<int>op;
        solve(v,0,nums,op);
    

        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        // char marker;
        // cin >> marker;

        Solution obj;
        vector<vector<int>> ans = obj.printUniqueSubsets(nums);
        sort(ans.begin(), ans.end());
        //   printAns(ans);
        cout << "[ ";
        for (int i = 0; i < ans.size(); i++) {
            cout << "[ ";
            for (int j = 0; j < ans[i].size(); j++) cout << ans[i][j] << " ";
            cout << "]";
        }
        cout << " ]\n";

        // cout<< "~\n";
    }

    return 0;
}

// } Driver Code Ends