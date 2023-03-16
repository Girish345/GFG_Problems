//{ Driver Code Starts
#include<bits/stdc++.h> 
using namespace std; 


// } Driver Code Ends
//User function Template for C++

class Solution{   
  public:
    string secondSmallest(int S, int D){
        // code here
        
        if(S>=D*9)
        return "-1";
        
        vector<int> num(D,0);
        
        num[0] = 1;
        
        S--;
        
        for(int i=D-1;i>=0;i--)
        {
            if(S>=9)
            {
                num[i] += 9;
                S-=9;
            }
            else
            {
                num[i] += S;
                S = 0;
            }
            
            if(num[i]>9)
            return "-1";
        }
        
        int idx = D-2;
        while(idx>=0 && num[idx]==9) idx--;
        
        num[idx]++;
        num[idx+1]--;
        
        string ans = "";
        for(int i=0;i<D;i++)
        {
            ans+=('0'+num[i]);
        }
        
        return ans;
    }
};

//{ Driver Code Starts.

int main() 
{ 
    int t;
    cin>>t;
    while(t--)
    {
        int S,D;
        cin >> S >> D;
        Solution ob;
        cout << ob.secondSmallest(S,D) << endl;
    }
    return 0; 
} 
// } Driver Code Ends