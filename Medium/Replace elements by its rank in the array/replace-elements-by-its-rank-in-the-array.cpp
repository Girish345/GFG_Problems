//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:

    vector<int> replaceWithRank(vector<int> &arr, int N){
         priority_queue<int,vector<int>,greater<int>>pq;

      int ind=1;

     for(auto i=0;i<N;i++){

       pq.push(arr[i]);

   }

 

   unordered_map<int,int>mp;

    for(auto i=0;i<N;i++){

        if(mp.find(pq.top())==mp.end()){

            mp[pq.top()]=ind++;

        }

        pq.pop();

    }

   

   for(auto i=0;i<N;i++){

       arr[i]=mp[arr[i]];

   }

   return arr;
       
    }

};


//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while(t--){
        //Input

       int n; cin >> n;
       vector<int> vec(n);
       for(int i = 0;i<n;i++) cin >> vec[i];

        Solution obj;
        vector<int> ans = obj.replaceWithRank(vec,n);
        for(int i = 0;i<n;i++) cout << ans[i] << " ";
        cout << endl;
        

        
        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}
// } Driver Code Ends