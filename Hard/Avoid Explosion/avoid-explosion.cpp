//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
    public:
    
    int adj[1005];
    
    int find_set(int v) {
        if (v != adj[v]){
            return adj[v] = find_set(adj[v]);
        }
        return adj[v];
    }

    vector<string> avoidExplosion(vector<vector<int>> mix, int n,vector<vector<int>> danger, int m) {
   
        for (int i=1; i<=n; i++){
            adj[i]=i;
        }
        
        vector<string> ans;
        
        for (int i=0; i<n; i++){
            int a=mix[i][0];
            int b=mix[i][1];
            
            bool flag=true;
            int x2=find_set(a);
            int y2=find_set(b);
            
            for (int j=0; j<m; j++){
                int x1=find_set(danger[j][0]);
                int y1=find_set(danger[j][1]);
                
                
                if ((x2==x1 && y2==y1) || (x2==y1 && y2==x1)){
                    flag=false;
                    break;
                }
            }
            
            if (flag){
                adj[x2]=y2;
                ans.push_back("Yes");
            }
            else{
                ans.push_back("No");
            }
        }
        
     return ans;
}
};

//{ Driver Code Starts.

int main() {
    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> mix(n, vector<int>(2));
        vector<vector<int>> danger(m, vector<int>(2));
        for (int i = 0; i < n; i++) {
            cin >> mix[i][0] >> mix[i][1];
        }

        for (int i = 0; i < m; i++) {
            cin >> danger[i][0] >> danger[i][1];
        }

        auto ans = sol.avoidExplosion(mix, n, danger, m);
        for (auto &val : ans) cout << val << " ";
        cout << "\n";
    }

    return 0;
}

// } Driver Code Ends