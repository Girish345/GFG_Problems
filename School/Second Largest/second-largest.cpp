//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	// Function returns the second
	// largest elements
	int print2largest(int arr[], int n) {
	     int maxi=arr[0];
    
    //firstly find the largest element 
    
    for(int i=1;i<n;i++){
        if(arr[i]>maxi){
            maxi=arr[i];
        }
    }
    int ans=-1,mini=0,diff=INT_MAX;
    
    //element should not be same
    //mini will be minimum as that will   //be the mini element               
    
    for(int i=0;i<n;i++){
        if(maxi!=arr[i]){
            mini=maxi-arr[i];
            
            if(diff>mini){
                ans=arr[i];
            }
            diff=min(diff,mini);
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
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        auto ans = ob.print2largest(arr, n);
        cout << ans << "\n";
    }
    return 0;
}

// } Driver Code Ends