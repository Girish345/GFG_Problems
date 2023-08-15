//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
    public:
    int maxOnes(int a[], int n)
    {
        // Your code goes here
          int ones=0;
        int zeros=0;
        int ans=0;
        int finalOne=0;
        for(int i=0;i<n;i++){
            if(a[i]==0){
                zeros++;
                ans=max(ans,(zeros-ones));
            }
        else{
           finalOne++; // Keeping track of total number of ones in the array
            ones++;
            if(zeros-ones<0){
                zeros=0;
                ones=0;
            }
        else{
            ans=max(ans,(zeros-ones));
        }
            
        }
            
        }
    return finalOne+ans;
    }
};


//{ Driver Code Starts.
int main()
{
    int t; cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n+5];
        for(int i=0;i<n;i++)
            cin>>a[i];
        Solution ob;
        cout<< ob.maxOnes(a, n) <<endl;
    }
    return 0;
}

// } Driver Code Ends