//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string removeKdigits(string num, int k) {
        
         stack<char>st;
          int n=num.size();

          for(char c:num){
              while(!st.empty() && k>0 && st.top()>c){
                  st.pop();
                  k=k-1;
              }

              if(!st.empty() || c!='0'){
                  st.push(c);
              }
          }

          //special case all in increasing order if elements are 1 2 3

          while(!st.empty() && k--){
              st.pop();
          }

          if(st.empty()){
              return "0";
          }

          while(!st.empty()){
                num[n-1]=st.top();
                st.pop();
                n=n-1;
          }

          return num.substr(n);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        string S;
        cin >> S;
        int K;
        cin >> K;
        Solution obj;
        cout << obj.removeKdigits(S, K) << endl;
    }
    return 0;
}

// } Driver Code Ends