//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends

class Solution {

    

    bool isPossible(int arr[], int N, int K, int mid){

        

        int count= 1;

        int temp= 0;

        

        for(int i=0; i<N; i++){

            

            if( arr[i] + temp <= mid ){

                temp +=  arr[i];

            }

            else {

                count ++;

                if( count > K || arr[i] > mid ){

                    return false;

                }

                temp = arr[i];

            }

        }

        

        return true;

    }

    

    

  public:

    int splitArray(int arr[] ,int N, int K) {

        

        int sum= 0;

        

        for(int i=0; i<N; i++){

            sum+=arr[i];

        }

        

        int start= 0, end= sum;

        int ans;

        

        while(start<=end){

            

            int mid= start+(end-start)/2;

            

            if(isPossible(arr,N,K,mid)){

                ans= mid;

                end= mid-1;

            } else {

                start= mid+1;

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
        int N, K;
        
        cin>>N>>K;
        int arr[N];
        
        for(int i=0 ; i<N ; i++)
            cin>>arr[i];

        Solution ob;
        cout<<ob.splitArray(arr,N,K);
        cout<<"\n";
    }
    return 0;
}
// } Driver Code Ends