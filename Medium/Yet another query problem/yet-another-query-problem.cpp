//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
   vector<int> solveQueries(int n, int num, vector<int> &A, vector<vector<int>> &Q) {
        // code here
        vector<int>v;
        for(int i=0;i<n;i++)
        {
            int count=0;
            for(int j=i;j<n;j++)
            {
                if(A[i]==A[j])
                {
                    count++;
                }
            }
            v.push_back(count);
        }
        vector<int >ans;
        int m=Q.size();
        for(int i=0;i<m;i++)
        {   int cou=0;
            for(int j=Q[i][0];j<=Q[i][1];j++)
            {
                if(v[j]==Q[i][2])
                {
                    cou++;
                }
            }
            ans.push_back(cou);
        }
        return ans;
    }
};


//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        int num;
        cin>>num;
        vector<int> A(N);
        for(int i=0;i<N;i++){
            cin>>A[i];
        }
        vector<vector<int>> Q(num, vector<int>(3));
        for(int i=0;i<num;i++){
            for(int j=0;j<3;j++){
                cin>>Q[i][j];
            }
        }
        Solution obj;
        vector<int> res = obj.solveQueries(N, num, A, Q);
        
        for(auto ele:res){
            cout<<ele<<" ";
        }
        cout<<endl;
    }
}

// } Driver Code Ends