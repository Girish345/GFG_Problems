//{ Driver Code Starts
#include<bits/stdc++.h>

using namespace std;


// } Driver Code Ends
class Solution{

    // Function to find the trapped water between the blocks.
    public:
    long long trappingWater(int arr[], int n){
        // code here
       /* vector<int>v;
        vector<int>b;
        for(int i=0;i<n;i++){
            b.push_back(arr[i]);
        }
        int j;
        
        sort(arr,arr+n);
        
        for(int i=n-1;i>=0;i--){
            v.push_back(arr[i]);
        }
        for(int i=0;i<n;i++){
            if(v[i]!=v[i+1]){
                j=v[i+1];
                break;
            }
            
        }
        int sum=0;
        for(int i=0;i<n;i++){
            if(b[i]<=j){
                if(b[i]<j)
                 sum=sum+j-b[i];
                 else{
                     return 0;
                 }
                 
                 
            
            }
            
           
        }
       
        
        return sum; */
        
        
          long long ans =0;

        int l[n],r[n];

        l[0]=arr[0];

        for(int i=1;i<n;i++){

            l[i]=max(l[i-1],arr[i]);

        }

        r[n-1]=arr[n-1];

        for(int i=n-2;i>0;i--){

            r[i]=max(r[i+1],arr[i]);

        }

        for(int i=0;i<n;i++){

            ans +=max(0,min(l[i],r[i])-arr[i]);

        }

        return ans;
        
        
    }
};

//{ Driver Code Starts.

int main(){
    
    int t;
    //testcases
    cin >> t;
    
    while(t--){
        int n;
        
        //size of array
        cin >> n;
        
        int a[n];
        
        //adding elements to the array
        for(int i =0;i<n;i++){
            cin >> a[i];            
        }
        Solution obj;
        //calling trappingWater() function
        cout << obj.trappingWater(a, n) << endl;
        
    }
    
    return 0;
}
// } Driver Code Ends