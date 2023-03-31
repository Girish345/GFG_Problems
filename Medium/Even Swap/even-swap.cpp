//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
       vector <int> lexicographicallyLargest(vector <int> &a,int n)
        {
            int val=a[n-1];
            int even=0,odd=0;
            if(val%2==0) even++;
            else odd++;
            int pos=n-1;
            for(int i=n-2;i>=0;i--){
                if(a[i]%2==0){
                    if(even!=0) even++;
                    else{
                        sort(a.begin()+i+1,a.begin()+pos+1,[](int b,int c){return b>c;});
                        even=1;odd=0;pos=i;
                    }
                }
                else{
                    if(odd!=0) odd++;
                    else{
                        sort(a.begin()+i+1,a.begin()+pos+1,[](int b,int c){return b>c;});
                        odd=1;even=0;pos=i;
                    }
                }
            }
            sort(a.begin(),a.begin()+pos+1,[](int b,int c){return b>c;});
            return a;
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
        vector <int> a(n);
        for(auto &j:a)
            cin>>j;
        Solution s;
        vector <int> b=s.lexicographicallyLargest(a,n);
        for(auto i:b)
            cout<<i<<" ";
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends