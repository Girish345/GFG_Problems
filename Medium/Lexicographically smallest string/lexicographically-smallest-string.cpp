//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    string lexicographicallySmallest(string s, int k) {
        // code here
        int n = s.length();

        

        if(ceil(log2(n)) == floor(log2(n))) k = k/2;

        else k = 2*k;

        

        int len = k;

        

        if(k>=n) {

            return "-1";

        }

        string ans;

        for(int i=0; i<n; i++){

            while(k>0 && ans.length()!=0 && s[i]<ans.back()){

                ans.pop_back();

                k--;

            }

            if(ans.length() < n-len) ans.push_back(s[i]); 

        }

        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        int k;
        cin >> S >> k;
        Solution ob;
        cout << ob.lexicographicallySmallest(S, k) << endl;
    }
    return 0;
}

// } Driver Code Ends