//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
   int goodSubsets(vector<int> &arr, int n){
    // Code here
    long long mod = 1e9 + 7;
    vector<int> cnt(31, 0);
    int primes[10] = {2, 3, 5, 7, 11, 13, 17, 19, 23, 29};
    int maskSize = 1<<10;
    for(int x : arr) cnt[x]++;
    long long dp[31][maskSize]; // dp[n][mask] = subsets using [1, n] numbers complying with primes mask
    dp[0][0] = 1; // Null set
    for(int j = 1; j < maskSize; j++) dp[0][j] = 0; // No prime factors using 1
    for(int i = 1; i <= 30; i++) {
        int mask = 0;
        bool canBeUsed = true;
        for(int j = 0; j < 10; j++) {
            int p = primes[j];
            if(i%p == 0 && i%(p*p) == 0) {
                canBeUsed = false;
                break; // We cannot use this number
            }
            if(i%p == 0) mask |= (1 << j);
        }
        for(int j = 0; j < maskSize; j++) {
            // not using i
            long long subsets = dp[i-1][j];
            // using i (in this case we cannot use the cases where this mask is already used)
            // j also need to comply with this mask
            if(canBeUsed && (j&mask) == mask) subsets = (subsets + (cnt[i] * dp[i-1][j&(~mask)]) % mod) % mod;
            dp[i][j] = subsets;
        }
    }
    long long ans = 0;
    for(int mask = 1; mask < maskSize; mask++) ans = (ans + dp[30][mask]) % mod;
    return ans;
}
};

//{ Driver Code Starts.

int main(){
    
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        Solution ob;
        cout<<ob.goodSubsets(a, n)<<endl;
    }
    return 0;
}
// } Driver Code Ends