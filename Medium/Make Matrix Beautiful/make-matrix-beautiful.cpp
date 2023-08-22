//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution
{
    public:
    //Function to find minimum number of operations that are required 
    //to make the matrix beautiful.
    int findMinOpeartion(vector<vector<int> > matrix, int n)
    {
        // code here 
        
        
            int sum = 0;
        
        for (int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                sum += matrix[i][j];
            }
        }
        
        int rs=0,cs=0;
        
        for (int i=0;i<n;i++)
        {
            int a =0;
            for (int j=0;j<n;j++)
            {
                a+=matrix[i][j];
            }
            rs = max(a,rs);
            
            int b=0;
            for(int j=0;j<n;j++)
            {
                b+=matrix[j][i];
            }
            
            cs = max(cs,b);
        }
        
        int maxi = max(rs,cs);
        
        int ans = maxi*n-sum;
        
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
        int n;
        cin>>n;
        vector<vector<int> > matrix (n,vector<int>(n));
        for(int i=0;i<n;i++)
            for(int j=0;j<n;j++)
                cin>>matrix[i][j];
        Solution ob;
        cout << ob.findMinOpeartion(matrix, n) << endl;
    }
    return 0;
}


// } Driver Code Ends