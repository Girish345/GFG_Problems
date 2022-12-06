//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution 
{
    public:
    //Function to find distance of nearest 1 in the grid for each cell.
	vector<vector<int>>nearest(vector<vector<int>>grid)
	{
	    // Code here
	    int n = grid.size();
	    int m = grid[0].size();
	    vector<vector<int>> vis = vector<vector<int>> (n,vector<int>(m,0));
	    queue<vector<int>> q;
	    
	    for(int i=0; i<n; ++i){
	        for(int j=0; j<m; ++j){
	            if(grid[i][j] == 0){
	                grid[i][j] = 1;
	            }
	            else if(grid[i][j] == 1){
	                grid[i][j] = 0;// no need to change after bfs
	                vis[i][j] = 1;
	                q.push({i,j,0});
	            }
	        }
	    }
	    int dx[] = {-1,0,0,1};
	    int dy[] = {0,-1,1,0};
	    // now start bfs from 0s, update other cells
	    while(!q.empty()){
	        int q_sz = q.size();
	        for(int i=0; i<q_sz; ++i){
	            auto v = q.front();
	            q.pop();
	            int x = v[0], y = v[1], dist = v[2];
	            for(int j=0; j<4; ++j){
	                int new_x = x+dx[j];
	                int new_y = y+dy[j];
	                if(new_x>=0 && new_x<n && new_y>=0 && new_y<m && vis[new_x][new_y] == 0){
	                    q.push({new_x,new_y,dist+1});
	                    grid[new_x][new_y] = dist+1;
	                    vis[new_x][new_y] = 1;
	                }
	            }
	        }
	    }
	    return grid;
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>>grid(n, vector<int>(m, -1));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> grid[i][j];
			}
		}
		Solution obj;
		vector<vector<int>> ans = obj.nearest(grid);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
			cout << "\n";
		}
	}
	return 0;
}
// } Driver Code Ends