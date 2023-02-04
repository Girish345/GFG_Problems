//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    int longestKSubstr(string s, int k) {
    // your code here
        unordered_map<char,int>m;

        

        int res=-1;

        int j=0,i=0;

    

    while(j<s.length()){

        m[s[j]]++;

        

        if(m.size()<k){

            j++;

        }

        

        else if(m.size()==k){

            res=max(res,j-i+1);

            j++;

        }

        

         else  if(m.size()>k){

              while(m.size()>k){

                   m[s[i]]--;

                     if(m[s[i]]==0){

                         m.erase(s[i]);

                }

                i++;

            }

            j++;

        }

    }                         

    

   return res; 
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int k;
        cin >> k;
        Solution ob;
        cout << ob.longestKSubstr(s, k) << endl;
    }
}

// } Driver Code Ends