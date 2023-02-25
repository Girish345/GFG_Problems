//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int checkCompressed(string S, string T) {
        // code here
                int m=S.size();

        int n=T.size();

        int i=0,j=0;

        

        while(i<m and j<n){

            if(S[i]==T[j]){

                i++;

                j++;

                continue;

            }

            else{

                if(T[j]>='0' and T[j]<='9'){

                    string s="";

                    while(j<n and (T[j]>='0' and T[j]<='9')){

                        s+=T[j];

                        j++;

                    }

                    int len=stoi(s);

                    i=i+len;

                    

                }

                else return 0;

            }

        }

        if(i==m and j==n) return 1;

        else return 0;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S,T;
        
        cin>>S>>T;

        Solution ob;
        cout << ob.checkCompressed(S,T) << endl;
    }
    return 0;
}
// } Driver Code Ends