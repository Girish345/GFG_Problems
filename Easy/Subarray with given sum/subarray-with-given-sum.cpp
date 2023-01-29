//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find a continuous sub-array which adds up to a given number.
    vector<int> subarraySum(vector<int>arr, int n, long long s)
    {
         // Your code here
        int start = 0; 
        int end = 0; 
    
        long long sum = 0; 
        while(end<=n){
            if(start==end || sum<s){
                sum += arr[end]; 
                end++; 
            }
            
            else if(sum > s){
                sum -= arr[start]; 
                start++; 
            }
            
            else 
                return {start+1, end}; 
        }
        
        return {-1}; 
        // Your code here
    }
};

//{ Driver Code Starts.

int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        long long s;
        cin>>n>>s;
        vector<int>arr(n);
        // int arr[n];
        const int mx = 1e9;
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        vector<int>res;
        res = ob.subarraySum(arr, n, s);
        
        for(int i = 0;i<res.size();i++)
            cout<<res[i]<<" ";
        cout<<endl;
        
    }
	return 0;
}
// } Driver Code Ends