//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    bool isStraightHand(int N, int w, vector<int> &hand) {
         if(N%w!=0){
            return false;
        }
        priority_queue<int,vector<int>,greater<int>>pq;
        unordered_map<int,int>mp;
        for(auto i:hand){
            mp[i]++;
        }

        for(auto it:mp){
            pq.push(it.first);
        }

        while(!pq.empty()){
            int smallest=pq.top();

            for(int i=0;i<w;i++){
                if(mp.find(i+smallest)==mp.end()){
                    return false;
                }

                mp[i+smallest]--;

                if(mp[i+smallest]==0){
                    if(i+smallest!=pq.top()){
                        return false;
                    }
                    pq.pop();
                }
                
                
            }
        }

        return true;
        // code here
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, groupSize;
        cin >> N >> groupSize;

        vector<int> hand(N);
        for (int i = 0; i < N; i++) cin >> hand[i];

        Solution obj;
        int ans = obj.isStraightHand(N, groupSize, hand);
        if (ans)
            cout << "True" << endl;
        else
            cout << "False" << endl;
    }
    return 0;
}
// } Driver Code Ends