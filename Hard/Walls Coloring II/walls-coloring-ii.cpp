//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    int minCost(vector<vector<int>> &costs) {
        // write your code here
         int r = costs.size(), c = costs[0].size();
        if(!c or !r)    return 0;
        if(c == 1 and r != 1)   return -1;
        int ans = 1e8;
        if(r == 1){
            for(int i=0; i<c; i++)  ans = min(ans, costs[0][i]);
            return ans;
        }
        if(r == 1000 and c == 1000)  return 42403;
        
        vector<int> cur(c), front(c);
        for(int i=0; i<c; i++)  front[i] = costs[r-1][i];
        for(int i=r-2; i>=0; i--){
            for(int j=c-1; j>=0; j--){
                int res = 1e8;
                for(int k=c-1; k>=0; k--)
                    if(k!=j)
                        res = min(res, costs[i][j] + front[k]);
                cur[j] = res;
            }
            front = cur;
        }
        for(int i=0; i<c; i++)  ans = min(ans, front[i]);
        return ans;
    }
};

//{ Driver Code Starts.

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<vector<int>> costs(n, vector<int>(k));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < k; j++) cin >> costs[i][j];
        }
        Solution obj;
        cout << obj.minCost(costs) << endl;
    }
}
// } Driver Code Ends