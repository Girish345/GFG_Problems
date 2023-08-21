//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    
    void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>> &grid){
        int n=grid.size();
        int m=grid[0].size();
        
        vis[row][col]=1;
        
        int delRow[]={-1,0,1,0};
        int delCol[]={0,1,0,-1};
        
        for(int i=0;i<4;i++){
            int nrow=delRow[i]+row;
            int ncol=delCol[i]+col;
            
            if(nrow>=0 && nrow<n && ncol>=0 && ncol<m && !vis[nrow][ncol] && grid[nrow][ncol]==1){
                dfs(nrow,ncol,vis,grid);
                // vis[nrow][ncol]=1;
            }
        }
    }
  public:
    int numberOfEnclaves(vector<vector<int>> &grid) {
        // Code here
        
        int n=grid.size();
        int m=grid[0].size();
        
         
          
          vector<vector<int>>vis(n,vector<int>(m,0));
          
          for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                  if(i==0 || j==0 || i==n-1 || j==m-1){
                      if(grid[i][j]==1 && !vis[i][j]){
                          dfs(i,j,vis,grid);
                      }
                  }
              }
          }
          
          int count=0;
          for(int i=0;i<n;i++){
              for(int j=0;j<m;j++){
                  if(!vis[i][j] && grid[i][j]==1){
                      count++;
                  }
              }
          }
          return count;
    }
};



//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> grid(n, vector<int>(m));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                cin >> grid[i][j];
            }
        }
        Solution obj;
        cout << obj.numberOfEnclaves(grid) << endl;
    }
}
// } Driver Code Ends