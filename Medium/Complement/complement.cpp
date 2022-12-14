//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
    vector<int> findRange(string str, int n) {
        // code here
        vector<int>res(2);
        int global_max = INT_MIN;
        int local_max =0;
        int l = 0;
        int r = 0;
         for(int i = 0; i< n ; i++)
         {
           int num = str[i] == '0' ? 1 : -1;
           if(num > num + local_max)
           {
               l = i;
               r = i;
               local_max = num;
           }
           else
           {
               r = i;
               local_max = num + local_max;
           }
           if(global_max < local_max)
           {
               res[0] = l+1;
               res[1] = r+1;
               global_max = local_max;
           }
         }
         if( global_max <0)
         return {-1};
         return res;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        Solution ob;
        auto ans = ob.findRange(s, n);

        if (ans.size() == 1) {
            cout << ans[0] << "\n";
        } else {
            cout << ans[0] << " " << ans[1] << "\n";
        }
    }
    return 0;
}
// } Driver Code Ends