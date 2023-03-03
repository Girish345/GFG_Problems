//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    bool isprime(long int n)

{

    // Corner cases

    if (n <= 1)

        return false;

  //suppose n=7 that is prime and its pair are (1,7)

  //so if a no. is prime then it can be check by numbers smaller than square root

  // of the n

    for (int i = 2; i * i <= n; i++) {

        if (n % i == 0)

            return false;

    }

    return true;

}

 

    vector<long long int> minimumSquares(long long int L, long long int B)

    {

        // code her

       

        long long m=min(L,B);

        long long n=max(L,B);

         if(isprime(n) )

            return {L*B , 1};

        for(long int i=1;i<=m;i++){

            if(m%i ==0 ){

                long long k=m/i;

                if(n%k==0){

                    long long p=n/k ;

                    return {p*i,k};

                }

            }

        }

    }


};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        long long int L, B;
        cin>>L>>B;
        
        Solution ob;
        vector<long long int> ans = ob.minimumSquares(L, B);
        cout<<ans[0]<<" "<<ans[1]<<"\n";
    }
    return 0;
}
// } Driver Code Ends