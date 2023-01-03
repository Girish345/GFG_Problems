//{ Driver Code Starts
// Driver code

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
  public:
    int findOnce(int nums[], int n)
    {
        //code here.
         if(n==0) return nums[0];
        if(n==1) return nums[0];

        int s=0;
        int e=n-1;

        while(s<=e){
            int mid=s+(e-s)/2;

            if(mid%2){
                if(nums[mid]==nums[mid-1]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
            else{
                if(nums[mid]==nums[mid+1]){
                    s=mid+1;
                }
                else{
                    e=mid-1;
                }
            }
        }
        return nums[s];
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        int A[n];
        for(int i = 0;i < n;i++)
        {
            cin>>A[i];
        }
        
        Solution ob;
        
        int res = ob.findOnce(A,n);
        cout << res << endl;
    }
    
    return 0;
}
// } Driver Code Ends