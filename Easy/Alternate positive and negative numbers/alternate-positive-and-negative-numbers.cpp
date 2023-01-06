//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:

	void rearrange(int nums[], int n) {
	     vector<int>v1;
        vector<int>v2;

        for(int i=0;i<n;i++){
            if(nums[i]<0){
                v2.push_back(nums[i]);
            }
            else{
                v1.push_back(nums[i]);
            }
        }

        int i,j,k=0;
        vector<int>v;

        while(i<v1.size() && j<v2.size()){
              v.push_back(v1[i]);
              v.push_back(v2[j]);
              i++;
              j++;
        }

        while(i<v1.size()){
             v.push_back(v1[i]);
             i++;

        }
        while(j<v2.size()){
             v.push_back(v2[j]);
             j++;

        }
         for(int i=0;i<n;i++){
             nums[i]=v[i];
         }
         
	    // code here
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, i;
        cin >> n;
        int arr[n];
        for (i = 0; i < n; i++) {
            cin >> arr[i];
        }
        Solution ob;
        ob.rearrange(arr, n);
        for (i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends