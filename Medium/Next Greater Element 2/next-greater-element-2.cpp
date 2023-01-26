//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> nextGreaterElement(int n, vector<int>& nums) {
        // code here
         
        vector<int>ans(n,-1);
        stack<int>st;

        for(int i=0;i<2*n;i++){
            while(!st.empty() && nums[i%n]>nums[st.top()%n]){
                ans[st.top()%n]=nums[i%n];
                st.pop();

            }
            st.push(i%n);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> arr(N);
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution obj;
        vector<int> ans = obj.nextGreaterElement(N, arr);
        for (auto &it : ans) {
            cout << it << ' ';
        }
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends