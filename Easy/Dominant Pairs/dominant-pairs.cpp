//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
                   int countlower(vector<int> &arr, int s, int e, int val){
        while(s<=e){
            int mid=(s+e)/2;
            if(arr[mid]*5<=val) s=mid+1;
            else e=mid-1;
        }
        return s;
    }
    int dominantPairs(int n,vector<int> &arr){
        // Code here
        int ans=0;
        sort(arr.begin()+n/2, arr.end());
        for(int i=0; i<n/2; i++){
            ans+=countlower(arr, n/2, n-1, arr[i])-n/2;
        }
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
        vector<int> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.dominantPairs(n,arr)<<endl;
    }
}
// } Driver Code Ends