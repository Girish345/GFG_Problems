//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    vector<int> shortestPath(int N,int M, vector<vector<int>>& edges){

        // code here 

        unordered_map<int,list<pair<int,int>>>adj;

        vector<int>dis(N,1e9);

        for(auto it:edges)

        {

            adj[it[0]].push_back({it[1],it[2]});

        }

     

        queue<int>q;

        dis[0] = 0;

        q.push(0);

        while(!q.empty())

        {

            auto it=q.front();

            q.pop();

            for(auto nbr:adj[it])

            {

                if(dis[it] + nbr.second < dis[nbr.first])

                {

                    dis[nbr.first] = dis[it]+nbr.second;

                    q.push(nbr.first);

                }

            }

        }

        for(int i=0;i<N;i++)

        {

            if(dis[i] == 1e9) dis[i] = -1;

        }

        return dis;

    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, m;
        cin >> n >> m;
        vector<vector<int>> edges;
        for(int i=0; i<m; ++i){
            vector<int> temp;
            for(int j=0; j<3; ++j){
                int x; cin>>x;
                temp.push_back(x);
            }
            edges.push_back(temp);
        }
        Solution obj;
        vector<int> res = obj.shortestPath(n, m, edges);
        for (auto x : res) {
            cout << x << " ";
        }
        cout << "\n";
    }
}

// } Driver Code Ends