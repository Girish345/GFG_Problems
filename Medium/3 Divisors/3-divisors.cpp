//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
class Solution
{
public:
    vector<int> threeDivisors(vector<long long> query, int q)
    {
        // Write your code here
        long long mx = 0;
        for (int i = 0; i < q; i++)
        {
            mx = max(mx, query[i]);
        }
        if (mx > 1000000)
        mx = 1000000;
        vector<int> ans(q), dp(mx + 1, 0), isprime(mx + 1, 0);
        isprime[0] = 1;
        isprime[1] = 1;
        for (int i = 2; i <= mx/2 ; i++)
        {
            if (isprime[i])
            continue;
            for (int j = 2*i; j <= mx; j += i)
            {
                isprime[j]++;
            }
        }
        int count = 1;
        dp[4] = 1;
        long long sq;
        for (int i = 5; i <= mx; i++)
        {
            sq = sqrt(i);
            if ((sq*sq == i) && !isprime[sq])
            {
                count++;
            }
            dp[i] = count;
        }
        long long n;
        for (int i = 0; i < q; i++)
        {
            n = query[i];
            if (n > 1000000)
            {
                ans[i] = dp[1000000];
                for (long long j = 1e6 + 1; j < n; j++)
                {
                    sq = sqrt(j);
                    if ((sq*sq == j) && !isprime[sq])
                    {
                        ans[i]++;
                    }
                }
            }
            else
            {
                ans[i] = dp[n];
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin >> t;
    while(t--){
        int q;cin>>q;
        vector<long long> query(q);
        for(int i=0;i<q;i++){
            cin>>query[i];
        }
        Solution ob;
            
        vector<int> ans = ob.threeDivisors(query,q);
        for(auto cnt : ans) {
            cout<< cnt << endl;
        }
    }
    return 0;
}
// } Driver Code Ends