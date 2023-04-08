//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Temp
class Solution {
  public:
    vector<int> makeBeautiful(vector<int> arr) {
        vector<int> ans;
        for(int i = 0; i < arr.size(); i++){
            if(ans.empty())
                ans.push_back(arr[i]);
            else if(arr[i] >= 0 && ans[ans.size()-1] < 0){
                ans.pop_back();
            }
            else if(arr[i] < 0 && ans[ans.size() - 1] >= 0){
                ans.pop_back();
            }
            else
                ans.push_back(arr[i]);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> res = obj.makeBeautiful(arr);
        for (int i = 0; i < res.size(); i++) {
            cout << res[i] << " ";
        }

        cout << "\n";
    }
}
// } Driver Code Ends