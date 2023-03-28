//{ Driver Code Starts
//Initial Template for C++


#include<bits/stdc++.h>
using namespace std;

class Shop
{
    vector<int> chocolates;
    int countOfCalls;
    public:
    Shop()
    {
        countOfCalls = 0;
    }
    void addChocolate(int x)
    {
        chocolates.push_back(x);
    }
    long long get(int i)
    {
        countOfCalls++;
        if(i<0 || i>=(int)chocolates.size() || countOfCalls>50)return -1;
        return chocolates[i];
    }
};


// } Driver Code Ends
//User function Template for Java

/*
Instructions - 

    1. 'shop' is object of class Shop.
    2. User 'shop.get(int i)' to enquire about the price
            of the i^th chocolate.
    3. Every chocolate in shop is arranged in increasing order
            i.e. shop.get(i) <= shop.get(i + 1) for all 0 <= i < n - 1
*/
class Solution{
    public:
    Shop shop;
    Solution(Shop s)
    {
        this->shop = s;
    }
    
    long long find (long  n, long k){
        if(k == 0) return 0;
        long long ans = 0;
        long long  low = 0 , high = n-1;
        long long mid_val = -1;
        long long mid;
        while(low<=high){
            mid = (low+high)/2;
            mid_val = shop.get(mid);
            if(mid_val == k){
                k = 0;
                ans++;
                return ans;
            }
            else if(mid_val < k){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        if(mid_val == -1) return 0;
        if(mid_val > k && mid > 0){
            int cur = shop.get(mid-1);
            ans += k/cur;
            k -= (k/cur)*cur;
        }
        else if(mid_val > k && mid == 0) return 0;
        else if(mid_val < k){
            ans += k/mid_val;
            k -= (k/mid_val)*mid_val;
        }
        return ans + find(mid,k);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        long long k;
        cin >> k;
        
        Shop shop;
        for(int i = 0; i<n; i++)
        {
            int x;
            cin >> x;
            shop.addChocolate(x);
        }
        
        Solution obj(shop);
        long long res = obj.find(n, k);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends