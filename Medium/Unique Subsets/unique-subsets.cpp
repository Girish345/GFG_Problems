//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution


{
    
    public:
       void solve(int idx, int n, vector<int>v,vector<int>arr, set<vector<int>>&st){
       if(idx==n){
           sort(v.begin(),v.end());
           st.insert(v);
           return ;
       }
       v.push_back(arr[idx]);
       solve(idx+1,n,v,arr,st);
       v.pop_back();
       solve(idx+1,n,v,arr,st);
   }
   
  
   vector<vector<int> > AllSubsets(vector<int> arr, int n)
   {
       vector<vector<int>>ans;
       vector<int>v;
       set<vector<int>>st;
       solve(0,n,v,arr,st);
       for(auto x:st){
           ans.push_back(x);
       }
       return ans;
   }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> A;
        int x;
        for(int i=0;i<n;i++){
            cin>>x;
            A.push_back(x);
        }
        Solution obj;
        vector<vector<int> > result = obj.AllSubsets(A,n);
        // printing the output
        for(int i=0;i<result.size();i++){
            cout<<'(';
            for(int j=0;j<result[i].size();j++){
                cout<<result[i][j];
                if(j<result[i].size()-1)
                    cout<<" ";
            }
            cout<<")";
        }
        cout<<"\n";
    }
}   



// } Driver Code Ends