//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {

  public:
    int noConseBits(int n) {
        // code here
        
        int ans=0;
        int one=0;
        for(int i=31;i>=0;i--)
        {
            if(n & (1<<i))
            {
                one++;
                // cout<<i<<" ";
                if(one==3)
                    one=0;
                else
                    ans+=1<<i;
                    
            }
            else
                one=0;
        }
        return ans?ans:n;
    }
};


//{ Driver Code Starts.

int main() {

    int tt;
    cin >> tt;
    Solution sol;
    while (tt--) {

        int n;
        cin >> n;
        int ans = sol.noConseBits(n);
        cout << ans << '\n';
    }

    return 0;
}

// } Driver Code Ends