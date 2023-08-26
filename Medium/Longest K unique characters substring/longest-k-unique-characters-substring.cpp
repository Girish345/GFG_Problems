//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
    
    map<char, int> ma;
        int x = INT_MIN;
        int l = 0;
        int r = 0;
        while(r >= l && r < int(s.size()))
        {
            ma[s[r]]++;
            if(ma.size() == k)
            {
                x = max(x, r - l);
            }
            if(ma.size() > k)
            {
                ma[s[l]]--;
                if(ma[s[l]] == 0)
                {
                    ma.erase(s[l]);
                }
                l++;
            }
            r++;
        }
        if(x == INT_MIN)
        {
            x = -2;
        }
        x++;
        return x;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends