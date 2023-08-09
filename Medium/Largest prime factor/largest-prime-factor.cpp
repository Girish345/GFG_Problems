//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std;

// } Driver Code Ends
class Solution{
public: 
    long long int largestPrimeFactor(int N){
        // code here
        
        long long ans=0;
        int n=sqrt(N);
        for(int i=2;i<=n;i++){
            if(N%i==0){
                ans=i;
                while(N%i==0){
                    N=N/i;
                }
            }
        }
        if(N>1)return N;
        return ans;
    }
};

//{ Driver Code Starts.
int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin>>N;
        Solution ob;
        cout << ob.largestPrimeFactor(N) << endl;
    }
    return 0; 
}
// } Driver Code Ends