//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    vector<char> easyTask(int n,string s,int q,vector<vector<string>> &qu){
          //string ab="abcdefghijklmnopqrstuvwxyz";
        vector<char>ans;
        for(int i=0;i<q;i++)
        {
            if(qu[i].size()==3)
            {
                long long x=stoll(qu[i][1]);
                string a=qu[i][2];
               s[x]=a[0];
              // cout<<s<<" cahned\n";
            }
            else
            { //cout<<s<<endl;
                long long x=stoll(qu[i][1]);
                long long y=stoll(qu[i][2]);
                long long z=stoll(qu[i][3]);
                vector<int>d(26,0);
                for(int i=x;i<=y;i++)
                d[s[i]-'a']++;
                int k=0;
                for(int i=25;i>=0;i--)
                {
                    k+=d[i];
                    if(k>=z)
                    {ans.push_back(i+'a');
                        break;
                    }
                }
            }
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
        string s;
        cin>>s;
        int q;
        cin>>q;
        vector<vector<string>> queries(q);
        for(int i=0;i<q;i++){
            string x;
            cin>>x;
            if(x=="1"){
                string p,q;
                cin>>p>>q;
                queries[i]={"1",p,q};
            }
            else{
                string p,q,r;
                cin>>p>>q>>r;
                queries[i]={"2",p,q,r};
            }
        }
        Solution ob;
        vector<char> ans=ob.easyTask(n,s,q,queries);
        for(auto ch:ans){
            cout<<ch<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends