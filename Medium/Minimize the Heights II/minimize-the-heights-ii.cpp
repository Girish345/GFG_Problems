//{ Driver Code Starts
// Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for C++

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        // code here
        /* vector<int>b;
        for(int i=0;i<n;i++){
            int m=k-2;
            if(i<=m){
            arr[i]=arr[i]+k;
            b.push_back(arr[i]);
            }
            else{
            arr[i]=arr[i]-k;
            b.push_back(arr[i]);
            }
        }
        
        for(int i=0;i<n;i++){
            arr[i]=b[i];
        }
        sort(arr,arr+n);
        return arr[n-1]-arr[0];
        */
       sort(arr,arr+n);
       int ans = arr[n-1]-arr[0];
       for(int i=0;i<n-1;i++)if(arr[i+1]>=k){
           ans = min(ans,max(arr[i]+k,arr[n-1]-k)-min(arr[0]+k,arr[i+1]-k));
       }
       return ans;
    
        
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> k;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.getMinDiff(arr, n, k);
        cout << ans << "\n";
    }
    return 0;
}
// } Driver Code Ends