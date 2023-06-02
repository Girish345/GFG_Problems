//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

vector<int> ans;

class Solution{
public:

// Global things : prime array.
// Find the graph in th forest with maximum nodes. K is the number of nodes and out = kth prime.
    int dfs(int vertex, int ct, vector<vector<int>>&g, vector<bool>&vis){
        vis[vertex] = true;
        ct++;
        for(auto & child : g[vertex]){
            if(vis[child]) continue;
            ct = dfs(child, ct, g, vis);
        }
        return ct;
    }
    void precompute(){
        // precalculate all the prime numbers till 1e5 prime numbers are obtained;
        const long long N = 2e6 + 1;
        vector<bool>prime(N, true);
        // cout << prime[0] << endl;
        for(long long p = 2; p*p <=N; p++){
            
            if(prime[p]){
                for(long long i = p*p; i <= N; i+=p)
                    prime[i] = false;
            }    
        
        }
        for(long long i = 2; i<=N; i++){
            if(prime[i] == true) ans.push_back(i);
        }
    }
    int helpSanta(int n, int m, vector<vector<int>> &g){
        // create the adjcency list from the graph.
        if(m==0)return-1;
        vector<bool>vis(n+1, false);
        
        int ct = 0;
        for(int i = 1; i <= n; i++){
            if(vis[i]) continue;
            ct = max(ct, dfs(i, 0, g, vis));
        }
        return ans[ct-1];
    }
};

//{ Driver Code Starts.

int main(){
	int t;cin>>t;
	Solution ob;
	ob.precompute();
	while(t--){
        int n,e,u,v;
        cin>>n>>e;
        vector<vector<int>> g(n+10);
        
		for(int i = 0; i < e; i++)
		{
			cin>>u>>v;
			g[u].push_back(v);
			g[v].push_back(u);
		}
		cout << ob.helpSanta(n, e, g) << endl;
		
	}
}



// } Driver Code Ends