//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<int> optimalArray(int n,vector<int> &a){
        // Code here
        int j = 0;
        int median = a[j];
        int sum = 0;
        vector<int> ret;
        for(int i=0;i<n;i++,j+=(i%2==0)){
            
            sum += a[i]-a[j];
            
            ret.push_back(sum);
        }
        return ret;
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
        Solution obj;
        vector<int> ans=obj.optimalArray(n,a);
        for(auto ele:ans){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends