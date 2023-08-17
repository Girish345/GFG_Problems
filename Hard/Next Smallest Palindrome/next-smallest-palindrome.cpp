//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:
	vector<int> generateNextPalindrome(int num[], int n) {
	    // code here
	    
	      int flag=0;
        int l=0,r=n-1;
        while(l<r){
            if(num[l]<num[r]){
                flag=-1;
            }
            else if(num[l]>num[r]){
                flag=1;
            }
            num[r]=num[l];
            l++;
            r--;
        }
        
        if(flag==0 or flag==-1){
            l=(n-1)/2;
            while(l>=0){
                if(num[l]<9){
                    num[l]+=1;
                    num[n-l-1]=num[l];
                   vector<int> v;
                   for(int i=0;i<n;i++)v.push_back(num[i]);
                   return v;
                }
                else{
                    num[l]=0;
                     num[n-l-1]=num[l];
                }
                l--;
        }
         vector<int> v;
         v.push_back(1);
                   for(int i=0;i<n;i++)v.push_back(num[i]);
                   v[n]=1;
                   return v;
        
    }
    else{
       vector<int> v;
                   for(int i=0;i<n;i++)v.push_back(num[i]);
                   return v;
    }
	}

};

//{ Driver Code Starts.


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int num[n];
        for (int i = 0; i < n; i++) {
            cin >> num[i];
        }
        Solution ob;
        auto ans = ob.generateNextPalindrome(num, n);
        for (auto x : ans) {
            cout << x << " ";
        }
        cout << "\n";
    }
    return 0;
}

// } Driver Code Ends