//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int beautySum(string s) {
        // Your code goes here
         int ans=0;
        for(int i=0;i<s.size();i++){
            vector<int>v(26,0);

            for(int j=i;j<s.size();j++){
                v[s[j]-'a']++;

                int mn=INT_MAX;
                int mx=INT_MIN;

                for(int k=0;k<26;k++){
                    
                    if(v[k]==0){
                        continue;
                    }
                    mn=min(mn,v[k]);
                    mx=max(mx,v[k]);
                    
                }
                 ans += mx - mn;
                

            }
        }
        return ans;
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        Solution obj;
        cout << obj.beautySum(s) << endl;
    }
    return 0;
}
// } Driver Code Ends