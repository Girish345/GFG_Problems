//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    long long solve(int N, int K, vector<long long> GeekNum) {
        // code here
             if(N<=K) return GeekNum[N-1];

        long long f[N+K];

        int i, j;

        for(i=0; i<N; i++) f[i] = GeekNum[i];

        for(i = K; i < N; i++) {

            long long sum = 0;

            for(j = 1; j <= K; j++){

                sum += f[i-j];

            }

            f[i] = sum;

        }

        return f[N-1];
    }
};


//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        int N, K;
        cin >> N >> K;

        vector<long long> GeekNum(K);

        for (int i = 0; i < K; i++) cin >> GeekNum[i];

        Solution ob;
        cout << ob.solve(N, K, GeekNum) << "\n";
    }
    return 0;
}

// } Driver Code Ends