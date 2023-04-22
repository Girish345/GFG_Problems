//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++
class Solution{
public:
    vector<long long> smallerSum(int n,vector<int> &arr){
        // Code here
        vector<int>arr1(arr.begin(),arr.end());
        vector<long long>sumarr(n,0);vector<long long>ans(n,0);
        sort(arr1.begin(),arr1.end());
        sumarr[0]=arr1[0];
        for(int i=1;i<n;i++){
            sumarr[i]=sumarr[i-1]+arr1[i];
        }
        for(int i=0;i<n;i++){
            int pos=lower_bound(arr1.begin(),arr1.end(),arr[i])-arr1.begin();
            if(pos==0)ans[i]=0;
            else ans[i]=sumarr[pos-1];
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
        vector<long long> ans=ob.smallerSum(n,arr);
        for(int i=0;i<n;i++){
            if(i!=n-1){
                cout<<ans[i]<<" ";
            }
            else{
                cout<<ans[i]<<endl;
            }
        }
    }
    return 0;
}
// } Driver Code Ends