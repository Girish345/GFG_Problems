//{ Driver Code Starts

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution {
public:
    int Count(vector<vector<int> >& matrix) {
        // Code here
        vector<vector<int>> dirs={{-1, 0}, {-1, 1}, {0,1}, {1,1},{1,0}, {1, -1}, {0,-1},{-1,-1}};
        int m=matrix.size();
        int n=matrix[0].size();
        int count=0;
    
        for(int i=0; i<m; ++i){
            for(int j=0; j<n; ++j){
                if(matrix[i][j]==0) continue;
                int ans=0;
                for(const auto& dir: dirs){
                    int x=i+dir[0], y=j+dir[1];
                    if(x>=0 && x<m && y>=0 && y<n && matrix[x][y]==0){
                        ++ans;
                    }
                }
                if(ans==0) continue;
                if(ans%2==0){
                    count++;
                }
             
            }
                
        }
        return count;
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<int>> matrix(n, vector<int>(m,0));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++){
				cin >> matrix[i][j];
			}
		}
		Solution ob;
		int ans = ob.Count(matrix);
		cout << ans <<"\n";
	}
	return 0;
}
// } Driver Code Ends