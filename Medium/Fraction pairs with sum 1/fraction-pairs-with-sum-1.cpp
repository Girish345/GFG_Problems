//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution
{
    public:
    int countFractions(int n, int numerator[], int denominator[])
    {
        
         map<pair<int,int>,int>mp;
       int cnt=0;
       for(int i=0;i<n;i++){
           int num=numerator[i];
           int den=denominator[i];
           int hcf=__gcd(num,den);
            num=num/hcf;
            den=den/hcf;
           
           if(mp.find({den-num,den})!=mp.end()){
               cnt+=mp[{den-num,den}];
           }
           mp[{num,den}]++;
       }
       return cnt;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int numerator[n],denominator[n];
        for(int i=0;i<n;i++)
            cin>>numerator[i];
        for(int i=0;i<n;i++)
            cin>>denominator[i];
        Solution ob;
        int ans=ob.countFractions(n,numerator,denominator);
        cout<<ans<<endl;
    }
}
// } Driver Code Ends