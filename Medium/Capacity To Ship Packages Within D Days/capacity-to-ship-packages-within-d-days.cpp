//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution {
  public:
    int leastWeightCapacity(int arr[], int n, int D) {
        // code here
         int l=0,r=0, m=0, ans=0, cnt=0,tmp=0;

        for(int i=0;i<n;i++){

            l=max(l,arr[i]);

            r+=arr[i];

        }

        ans=r;

        while(l<=r){

            m=(l+r)/2;

            cnt=1;

            tmp=0;

            for(int i=0;i<n;i++){

                if(tmp+arr[i]>m){

                    cnt++;

                    tmp=0;

                }

                tmp+=arr[i];

            }

            if(cnt>D){

                l=m+1;}

            else{

                ans=min(ans,m);

                r=m-1; }

        }

        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N,D;
        cin>>N;
        
        int arr[N];
        for(int i=0; i<N; i++)
            cin>>arr[i];
        cin>>D;

        Solution ob;
        cout << ob.leastWeightCapacity(arr,N,D) << endl;
    }
    return 0;
}
// } Driver Code Ends