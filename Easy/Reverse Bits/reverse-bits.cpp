//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    long long reversedBits(long long X) {
        // code here
        vector<int>v(32,0);
        for(int i=0;i<32;i++){
            v[i]=X&1;
            X=X>>1;
        }
        
        long long ans=0;
        for(int i=0;i<32;i++){
            if(v[i]==1){
                ans=ans+pow(2,31-i);
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        long long X;
        
        cin>>X;

        Solution ob;
        cout << ob.reversedBits(X) << endl;
    }
    return 0;
}
// } Driver Code Ends