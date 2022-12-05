//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int shotestPath(vector<vector<int>> mat, int n, int m, int k) {
        // code here
          if(mat[0][0]==1) return -1;
        vector<vector<vector<int>>>vis(n,vector<vector<int>>(m,vector<int>(k+1,0)));
        queue<vector<int>>q;
        q.push({0,0,k});
        vis[0][0][k] = 1;
         int dx[4] = {-1,0,1,0};
         int dy[4] = {0,1,0,-1};
         int ans = 0;
        while(!q.empty()){
            int size = q.size();
            for(int i=0;i<size;i++){
             auto v = q.front();
             int x = v[0],y = v[1],walls = v[2];
             q.pop();
             if(x==n-1 && y==m-1) return ans;
             for(int j=0;j<4;j++){
              int nx = x+dx[j];
              int ny = y+dy[j];
               if(nx>=0 && nx<n && ny>=0 && ny<m ){
                  if(mat[nx][ny]==0 && vis[nx][ny][walls]==0){
                   vis[nx][ny][walls] = 1;
                   q.push({nx,ny,walls});
                  }
                  else if(mat[nx][ny]==1 && walls>0 && vis[nx][ny][walls-1]==0){
                       vis[nx][ny][walls-1] = 1;
                       q.push({nx,ny,walls-1});
                  }
               }
             }
            }
            ans++;
          }
         return -1;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m, k, x;
        
        cin>>n>>m>>k;
        vector<vector<int>> mat;
    
        for(int i=0; i<n; i++)
        {
            vector<int> row;
            for(int j=0; j<m; j++)
            {
                cin>>x;
                row.push_back(x);
            }
            mat.push_back(row);
        }

        Solution ob;
        cout<<ob.shotestPath(mat,n,m,k);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends