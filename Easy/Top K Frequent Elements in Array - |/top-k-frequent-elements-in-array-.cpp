//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> topK(vector<int>& words, int k) {
        // Code here
        unordered_map<int,int>mp;
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>min_heap;

        for(auto it:words){
            mp[it]++;
        }

        

        for(auto i=mp.begin(); i!=mp.end();i++){
                min_heap.push({i->second,i->first});

                while(min_heap.size()>k){
                    min_heap.pop();
                }
        }

     vector<int> result;

     while(min_heap.size()>0){
         result.push_back(min_heap.top().second);
         min_heap.pop();
     }
     
     reverse(result.begin(),result.end());
    
    return result;

    }
};


//{ Driver Code Starts.
int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;
        vector<int> nums(n);
        for (auto &i : nums) cin >> i;
        int k;
        cin >> k;
        Solution obj;
        vector<int> ans = obj.topK(nums, k);
        for (auto i : ans) cout << i << " ";
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends