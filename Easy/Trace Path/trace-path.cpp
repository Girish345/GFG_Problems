//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void move(int &i , int &j , char c){
        switch (c){
            case 'L':
                j-=1;
                break;
            case 'R':
                j+=1;
                break;
            case 'D':
                i-=1;
                break;
            case 'U':
                i+=1;
                break;
            default:
                break;
        }
    }
    int isPossible(int n, int m, string s){
       int curI = 0;
       int curJ = 0;
       int maxI = 0;
       int minI = 0;
       int minJ = 0;
       int maxJ = 0;
       for(int i = 0 ; i < s.size() ; i++){
           move(curI, curJ, s[i]);
           minI = min(minI, curI);
           minJ = min(minJ , curJ);
           maxI = max(maxI, curI);
           maxJ = max(maxJ, curJ);
           if(abs(maxI - minI) >= n) return false;
           if(abs(maxJ - minJ) >= m) return false;
       }
       return true;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n, m;
        cin>>n>>m;
        string s;
        cin>>s;
        
        Solution ob;
        cout<<ob.isPossible(n, m, s)<<endl;
    }
    return 0;
}
// } Driver Code Ends