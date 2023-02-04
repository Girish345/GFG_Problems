//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubarray(int n, vector<int>& nums, int k) {
        // Code here
    unordered_map<int,int>mp;

       for(auto &num:nums){
           if(num%2){
               num=1;
           }else{
               num=0;
           }
       }
       mp[0]=1;
       int sum=0;
       int count=0;

       for(auto num:nums){
            sum+=num;
            count+=mp[sum-k];
            mp[sum]++;
       }

       return count;


    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        vector<int> nums;
        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            nums.push_back(x);
        }

        int k;
        cin >> k;

        Solution obj;
        cout << obj.countSubarray(n, nums, k) << endl;
    }
    return 0;
}
// } Driver Code Ends