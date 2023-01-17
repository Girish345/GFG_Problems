//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    
    //Function to check if brackets are balanced or not.
    bool ispar(string s)
    {
        // Your code here
         stack<char>st;
        for(auto i:s){
            if(i=='(' or i=='{' or i=='['){
                st.push(i);
            }
            else{
                if(st.empty() or (st.top()=='(' and i!=')') or (st.top()=='{' and i!='}') or (st.top()=='[' and i!=']') ) return false;
                st.pop();
            }
        }

        return st.empty();
        
    }

};

//{ Driver Code Starts.

int main()
{
   int t;
   string a;
   cin>>t;
   while(t--)
   {
       cin>>a;
       Solution obj;
       if(obj.ispar(a))
        cout<<"balanced"<<endl;
       else
        cout<<"not balanced"<<endl;
   }
}
// } Driver Code Ends