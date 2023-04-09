//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
  long long power(long long x, long long y, long long mod){
      long long r=1;
      while(y){
          if(y%2==1){
              r=(r*x)%mod;
          }
          x=(x*x)%mod;
          y/=2;
      }
      return r;
  }
  bool check(int n, int c, int d){
      while(n){
          int r=n%10;
          if(r==c || r==d){
              return true;
          }
          n/=10;
      }
      return false;
  }
    int bestNumbers(int N, int A, int B, int C, int D) {
        // code here
        
        
        if(A==B){
            return check(N*A,C,D);
        }
    
        
        
        
        if(B<A){
            swap(A,B);
        }
        if(D<C){
            swap(C,D);
        }
        long long ans=0;
        vector<long long> fact(N+1,1);
        long long MOD=1000000007;
        
        
        for(long long i=2;i<=N;i++){
            fact[i]=(fact[i-1]*i)%MOD;
        }
        
        
        
        
        
        for(int i=0;i<=N;i++){
            long long x=A*(N-i)+B*i;
            
            if(check(x,C,D)){
                long long z=power((fact[i]*fact[N-i])%MOD,MOD-2,MOD);
                z=(z*fact[N])%MOD;
                ans+=z;
            }
        }
        return ans%MOD;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int N;
        scanf("%d",&N);
        
        
        int A;
        scanf("%d",&A);
        
        
        int B;
        scanf("%d",&B);
        
        
        int C;
        scanf("%d",&C);
        
        
        int D;
        scanf("%d",&D);
        
        Solution obj;
        int res = obj.bestNumbers(N, A, B, C, D);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends