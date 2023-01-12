//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    
    void solve(vector<vector<int>> &ans, int i, vector<int>& ip, vector<int> op){
                    if(ip.size()==i){
                        ans.push_back(op);
                        return;
                            }
                solve(ans, i+1, ip, op);        
                op.push_back(ip[i]);
                solve(ans, i+1, ip, op);
                return;
            }
    public:
    vector<vector<int> > subsets(vector<int>& ip)
    {
        //code here
        
        vector<vector<int>> ans;
        vector<int>op;
        solve(ans, 0, ip, op);
        sort(ans.begin(),ans.end());
        return ans;
    }
};

//{ Driver Code Starts.

int main()
{
	int t;
	cin >> t;

	while (t--)
	{
		int n, x;
		cin >> n;

		vector<int> array;
		for (int i = 0; i < n; i++)
		{
			cin >> x;
			array.push_back(x);
		}
        
        
        Solution ob;
		vector<vector<int> > res = ob.subsets(array);

		// Print result
		for (int i = 0; i < res.size(); i++) {
			for (int j = 0; j < res[i].size(); j++)
				cout << res[i][j] << " ";
			cout << endl;
		}

		
	}

	return 0;
}
// } Driver Code Ends