//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    
    bool dfs(int start,int col,int V,vector<int>&vis,vector<int>adj[]){
        vis[start]=col;
        
        for(auto it:adj[start]){
            if(vis[it]==-1){
                if(dfs(it,!col,V,vis,adj)==false){
                    return false;
                }
            }
            else if(vis[it]==vis[start]){
                return false;
            }
        }
        return true;
    }
    
public:
	bool isBipartite(int V, vector<int>adj[]){
	    // Code here
	    vector<int>vis(V,-1);
	    
	    for(int i=0;i<V;i++){
	        if(vis[i]==-1){
	            if(dfs(i,0,V,vis,adj)==false){
	                return false;
	            }
	        }
	    }
	    return true;
	    
	}

};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int V, E;
		cin >> V >> E;
		vector<int>adj[V];
		for(int i = 0; i < E; i++){
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
		Solution obj;
		bool ans = obj.isBipartite(V, adj);    
		if(ans)cout << "1\n";
		else cout << "0\n";  
	}
	return 0;
}
// } Driver Code Ends