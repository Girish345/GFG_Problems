//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    bool makePalindrome(int n,vector<string> &arr){
        // Code here
        unordered_map<string,int> mp;
        
        for(auto i:arr)
        {
            mp[i]++;
        }
        
        int odd=0;
        for(auto i: mp)
        {
            string temp=i.first;
            reverse(temp.begin(),temp.end());
            
            if(i.first==temp)
            {
                if(i.second%2) // odd
                {
                    odd++;
                }
                if(odd>1)
                {
                    return false;
                }
            }
            else
            {
                if(i.second!=mp[temp])
                {
                    return false;
                }
            }
        }
        
        return true;
    }
};
 

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<string> arr(n);
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        Solution ob;
        if(ob.makePalindrome(n,arr)) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}
// } Driver Code Ends