//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

#define mod 1000000007

class Solution {
    public:
        int find(vector<vector<int>>& grid,int n, int m, vector<vector<int>>& dp){
            if(n<0||m<0||!grid[n][m])   return 0;
            if(dp[n][m]==-1)
                dp[n][m] = ((find(grid,n-1,m,dp)%mod)+(find(grid,n,m-1,dp)%mod))%mod;
            return dp[n][m];
        }
        
        int uniquePaths(int n, int m, vector<vector<int>> &grid) {
            vector<vector<int>> dp(n,vector<int>(m,-1));
            dp[0][0] = 1;
            return find(grid,n-1,m-1,dp);
        }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n,m,x;
        cin>>n>>m;
        
        vector<vector<int>> grid(n,vector<int>(m));
        
        for(int i=0; i<n; i++){
            for(int j=0; j<m; j++){
                cin>>grid[i][j];
            }
        }

        Solution ob;
        cout << ob.uniquePaths(n,m,grid) << endl;
    }
    return 0;
}
// } Driver Code Ends