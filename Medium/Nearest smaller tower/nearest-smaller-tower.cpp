//{ Driver Code Starts
//Initial Template for C++


#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
public:
    vector<int> nearestSmallerTower(vector<int> arr)
    {
        // code here
        
        int n = arr.size() ;
        
        vector<int>left(n , -1  ) ;
        vector<int>right(n , -1 ) ;
        vector<int>ans( n , -1 )  ;
        
        stack<int>st ;
        
        
        for( int i = 0 ; i < n ; i++ )
        {
            while(!st.empty() && arr[st.top()] >= arr[i] )
            {
                st.pop() ;
            }
            
            if(!st.empty())
            {
                left[i] = st.top() ;
            }
            
            st.push(i) ;
        }
        
        
        while(!st.empty()) st.pop() ;
        
        
        for( int i = n-1 ; i >=0 ; i-- )
        {
            while(!st.empty() && arr[st.top()] >= arr[i] )
            {
                st.pop() ;
            }
            
            if(!st.empty())
            {
                right[i] = st.top() ;
            }
            
            st.push(i) ;
        }
        
       
        for( int i = 0 ; i < n ; i++ )
        {
            if( left[i] != -1 && right[i] != -1 )
            {
                if(abs(left[i]-i) < abs(right[i]-i) )
                {
                    ans[i] = left[i] ;
                }
                else if(abs(left[i]-i) > abs(right[i]-i) )
                {
                    ans[i] = right[i] ;
                }
                else{
                    
                    if(arr[left[i]] < arr[right[i]] )
                    {
                        ans[i] = left[i] ;
                    }
                    else if(arr[left[i]] > arr[right[i]] )
                    {
                        ans[i] = right[i] ;
                    }
                    else{
                        ans[i] = left[i] ;
                    }
                }
            }
            else if( left[i] != -1 )
            {
                ans[i] = left[i] ;
            }
            else if( right[i] != -1 )
            {
                ans[i] = right[i] ;
            }
        }
        
        return ans ;
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
        vector<int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }
        Solution ob;
        vector<int> ans = ob.nearestSmallerTower(v);
        for (int i = 0; i < n; i++)
        {
            cout << ans[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}
// } Driver Code Ends