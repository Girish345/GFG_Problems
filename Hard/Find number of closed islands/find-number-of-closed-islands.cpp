//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution {
    public:
    int dr[4]={-1,0,1,0};
    int dc[4]={0,1,0,-1};
    
    void dfs(int row,int col,vector<vector<int>>&vis,vector<vector<int>>&matrix)
    {
        vis[row][col]=1;
        
        for(int i=0;i<4;i++)
        {
            int nr= row+dr[i];
            int nc= col+ dc[i];
            
            if(nr>=0 && nr<matrix.size() && nc>=0 && nc<matrix[0].size() && matrix[nr][nc]==1 && vis[nr][nc]==-1)
            {
                  dfs(nr,nc,vis,matrix);
           }
       }
   }
    int closedIslands(vector<vector<int>>& matrix, int N, int M) {
        // Code here
         vector<vector<int>>vis(N,vector<int>(M,-1));
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if((i==0 || i==N-1 || j==0 || j==M-1) &&  matrix[i][j]==1 && vis[i][j]==-1)
                {
                    dfs(i,j,vis,matrix);
                    
                }
            }
        }
        int c=0;
        
        for(int i=0;i<N;i++)
        {
            for(int j=0;j<M;j++)
            {
                if(matrix[i][j]==1 && vis[i][j]==-1) 
                {
                    c++;
                    dfs(i,j,vis,matrix);
                }
             }
        }
         return c;
     }
};

//{ Driver Code Starts.
int main() {
	int t;
	cin>>t;
	while(t--)
	{
        int N, M;
        cin >> N >> M;
        vector<vector<int>>matrix(N, vector<int>(M, 0));
        for(int i=0; i<N; i++)
            for(int j=0; j<M; j++)
                cin >> matrix[i][j];
                
        Solution obj;
        int ans = obj.closedIslands(matrix, N, M);
        cout << ans << "\n";
    }
	
	return 0;
	
}


// } Driver Code Ends