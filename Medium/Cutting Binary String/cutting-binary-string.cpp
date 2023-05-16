//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution
{
    bool check_number(int n)
    {
        while (n >= 5)
        {
            if (n % 5 != 0)
                return false;
            n /= 5;
        }

        return n == 1;
    }

    int solve(int i, long long int number, string &s, vector<unordered_map<long long int, int>> &dp)
    {
        if (i == s.size())
        {
            // cout<<"here "<<number<<endl;
            if (number == 0)
            {
                return 0;
            }

            return 1e9;
        }

        // leading zeros
        if (number == 0 && s[i] == '0')
            return 1e9;

        // dp
        if (dp[i].find(number) != dp[i].end())
            return dp[i][number];

        // update number
        number = (number << 1) + (s[i] - '0');
        // cout<<number<<endl;

        // skip case
        int ans = solve(i + 1, number, s, dp);

        // include case / cut lagao yaha par if possible
        if (check_number(number))
        {
            // cout<<"Here "<<number<<endl;
            ans = min(ans, (1 + solve(i + 1, 0, s, dp)));
        }

        return dp[i][number] = ans;
    }

public:
    int cuts(string s)
    {
        vector<unordered_map<long long int, int>> dp(s.length() + 1);
        int ans = solve(0, 0ll, s, dp);
        return ans >= 1e9 ? -1 : ans;
    }
};

//{ Driver Code Starts.
int main()
{
   int t;
   cin>>t;
   string s;
   while(t--)
   {
    cin>>s;
    Solution obj;
    int res=obj.cuts(s);
    cout<<res<<endl;

   }


    return 0;
}

// } Driver Code Ends