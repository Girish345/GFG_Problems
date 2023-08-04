//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void pushElementsInReverse(int x,stack<int>& st){
    if(st.empty()){
        st.emplace(x);
        return;
    }
    
    int top = st.top();
    st.pop();
    pushElementsInReverse(x,st);
    st.emplace(top);
}

void popElements(stack<int>& st){
    if(st.empty())return;
    
    int x = st.top();
    st.pop();
    popElements(st);
    
    pushElementsInReverse(x,st);
}

void Reverse(stack<int> &St){
    popElements(St);
}
};

//{ Driver Code Starts.


int main(){
    int T;
    cin>>T;
    while(T--){
        int N;
        cin>>N;
        stack<int> St;
        for(int i=0;i<N;i++){
            int x;
            cin>>x;
            St.push(x);
        }
        Solution ob;
        ob.Reverse(St);
        vector<int>res;
        while(St.size())
        {
            res.push_back(St.top());
            St.pop();
        }
        for(int i = res.size()-1;i>=0;i--)
        {
            cout<<res[i]<<" ";
        }
        
        cout<<endl;
    }
}
// } Driver Code Ends