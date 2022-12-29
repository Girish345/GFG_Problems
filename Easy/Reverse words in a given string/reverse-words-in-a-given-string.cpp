//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string S) 
    { 
        // code here 
        reverse(S.begin(),S.end());
        int j=0;
        for(int i=0;i<S.size();i++){
            if(S[i]=='.'){
                reverse(S.begin()+j,S.begin()+i);
                j=i+1;
            }
        }
        
        reverse(S.begin()+j,S.end());
        return S;
    } 
};

//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends