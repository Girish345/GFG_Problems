//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
   int nthFibonacci(int n){
        // code here
        if (n == 1 || n == 2)
        {
            return 1;
        }
        
        int first  = 1;
        int second = 1;
        
        int i = 2;
        
        while(i < n)
        {
            int tmp = second;
            second = (first+second)%1000000007;
            first  = tmp;
            i++;
        }
        
        return second;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        Solution ob;
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends