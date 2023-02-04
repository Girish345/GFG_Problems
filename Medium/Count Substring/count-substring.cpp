//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    int countSubstring(string s) {
        // Code here
        int i=0;
       int j=0;
       int n=s.size();
       int count=0;

       unordered_map<char,int>mp;
       while(j<n){
           if(mp.size()<3){
               mp[s[j]]++;
               j++;
           }

           while(mp.size()==3){
               count=count+1+(n-j);
               mp[s[i]]--;
               if(mp[s[i]]==0){
                   mp.erase(s[i]);
               }

               i++;
           }
       }
       return count;
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
        cout << obj.countSubstring(s) << endl;
    }
    return 0;
}
// } Driver Code Ends