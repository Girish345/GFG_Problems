//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        // your code here
        sort(arr,arr+N);
       string str1=arr[0];
       string str2=arr[N-1];
       int size1=str1.size();
        int size2=str2.size();
        string ans;
        int p1=0,p2=0;
        while(p1<size1&&p2<size2)
        {
            if(str1[p1]==str2[p2])
            ans.push_back(str1[p1]);
            else
            break;
            p1++;
            p2++;
        }
        if(ans.size()==0)
        return "-1";
        else
        return ans;
       
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends