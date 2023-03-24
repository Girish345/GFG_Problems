//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
 class Solution {
  public:
    string removeReverse(string S) {
        // code here
        string st = S;
        int n = st.size();

        vector<int> fre(26, 0);
        for (int i = 0; i < n; i++)
        {
            fre[st[i] - 'a']++;
        }
        int sptr = 0;
        int eptr = n - 1;
        bool front = true;
        while (sptr < eptr)
        {
            if (front && st[sptr] == 'A')
            {
                sptr++;
            }
            else if (!front && st[eptr] == 'A')
                eptr++;

            if (front && fre[st[sptr] - 'a'] > 1)
            {
                // remove and reverse
                fre[st[sptr] - 'a']--;
                st[sptr] = 'A';
                sptr++;
                front = false;
            }
            else if (front && fre[st[sptr] - 'a'] == 1)
            {
                sptr++;
            }
            if (!front && fre[st[eptr] - 'a'] > 1)
            {
                // remove and reverse
                fre[st[eptr] - 'a']--;
                st[eptr] = 'A';
                eptr--;
                front = true;
            }
            else if (!front && fre[st[eptr] - 'a'] == 1)
            {
                eptr--;
            }
        }
        // find the ans
        string ans = "";
        if (front)
        {
            // go for front
            for (int i = 0; i < n; i++)
            {
                if (st[i] == 'A')
                    continue;
                ans += st[i];
            }
        }
        else
        {
            for (int i = n - 1; i >= 0; i--)
            {
                if (st[i] == 'A')
                    continue;
                ans += st[i];
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
        string S;
        cin>>S;
        Solution obj;
        auto ans = obj.removeReverse(S);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends