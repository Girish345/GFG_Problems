//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

long long numOfWays(int n, int m);

int main() {
    // code
    int T;
    
    cin >> T;
    while (T--) {
        int n, m;
        cin >> n >> m;
        cout << numOfWays(n, m) << endl;
    }
    return 0;
}
// } Driver Code Ends


//Function to find out the number of ways we can place a black and a 
//white Knight on this chessboard such that they cannot attack each other.
long long numOfWays(int N, int M)
{
    // write code here
     long const mod = 1E9 + 7;
    long long NumOf3sqrv = 0;
    long long NumOf3sqrh = 0;
    long long NM = N*M%mod;
    long long NumofPositions = NM*(NM-1)%mod;
    
    if ((N >= 3) && (M >= 2)) NumOf3sqrv = (N-2)*(M-1);
    if ((M >= 3) && (N >= 2)) NumOf3sqrh = (N-1)*(M-2);
    unsigned long long resta = (NumOf3sqrv+NumOf3sqrh)*4;
    return  (NumofPositions - resta)%mod;
}
