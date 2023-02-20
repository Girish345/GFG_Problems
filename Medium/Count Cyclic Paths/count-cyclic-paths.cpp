//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h> 
using namespace std; 

// } Driver Code Ends
//User function Template for C++

class Solution{   
public:
    int countPaths(int N){
        // code here 
        int MOD=1e9+7;

        // code here 

        

        if(N==1)return 0;

        long int p1=0;

        long int p2=3;

        if(N==2)return p2;

        long int ans;

        for(int i=3;i<=N;i++)

        {

            ans=((p2*2)%MOD+(p1*3)%MOD)%MOD;

            p1=p2;

            p2=ans;

        }

        return ans%MOD;
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
        cin >> N;
        
        Solution ob;
        cout << ob.countPaths(N) << endl;
    }
    return 0; 
}

// } Driver Code Ends