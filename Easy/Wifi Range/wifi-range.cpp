//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    bool wifiRange(int N, string S, int X){
        for(int i=0;i<N;i++)
        {
            if(S[i]=='0')
        {
                bool check=false;
            for(int j=max(0,i-X);j<=min(N-1,i+X);j++)
            {
                if(S[j]=='1')
                {
                    check=true;
                    break;
                }
            }
            if(!check)
        return false;
        }
        }
        return true;
    }
};

//{ Driver Code Starts.

int main(){
    int T;
    cin >> T;
    while(T--){
        int N, X;
        string S;
        cin >> N >> X >> S;
        Solution obj;
        cout << obj.wifiRange(N, S, X) << "\n";
    }
}

// } Driver Code Ends