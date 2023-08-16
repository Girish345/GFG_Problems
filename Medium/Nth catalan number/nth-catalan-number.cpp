//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

const int M=1e9+7;
class Solution
{
    public:
    int C(int n,vector<int>&dp){
        if(n==0){
            return 1;
        }else if(n==1){
            return 1;
        }else if(n==2){
            return 2;
        }
        if(dp[n]!=-1)return dp[n];
        int ans=0;
        for(int k=0;k<n;k++){
            ans = (ans+(1LL*C(k,dp)*C(n-k-1,dp)))%M;
        }
        return dp[n]=ans%M;
    }
    int findCatalan(int n) 
    {
        vector<int>dp(n+1,-1);
        return (C(n,dp))%M;
    }
};

//{ Driver Code Starts.
int main() 
{
	int t;
	cin>>t;
	while(t--) {
	    
	    int n;
	    cin>>n;
	    Solution obj;
	    cout<< obj.findCatalan(n) <<"\n";    
	}
	return 0;
}
// } Driver Code Ends