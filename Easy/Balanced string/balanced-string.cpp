//{ Driver Code Starts
// Initial template for c++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function template for c++

class Solution {
  public:
    string BalancedString(int N) {
        // code here
        int times = N / 26;
        int nums = N % 26;
        
        string temp = "abcdefghijklmnopqrstuvwxyz";
        string ans = "";
        
        while(times--) {
            ans += temp;
        }
        
        if(nums % 2 == 0) {
            // cout<<"even"<<endl;

            ans += temp.substr(0, nums >> 1);
            ans += temp.substr(26 - (nums >> 1));
        }
        else {
            
            int sum = 0;
            int n = N;
            
            while(n) {
                sum += n%10;
                n /= 10;
            }
            
            if(sum % 2 == 0) {
                // cout<<"odd even"<<endl;
                
                ans += temp.substr(0, (nums + 1) >> 1);
                ans += temp.substr(26 - ((nums - 1) >> 1));
            }
            else {
                // cout<<"odd odd"<<endl;
                
                ans += temp.substr(0, (nums - 1) >> 1);
                ans += temp.substr(26 - ((nums + 1) >> 1));
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
        int N;
        cin >> N;
        Solution ob;
        cout << ob.BalancedString(N) << endl;
    }
    return 0;
}

// } Driver Code Ends