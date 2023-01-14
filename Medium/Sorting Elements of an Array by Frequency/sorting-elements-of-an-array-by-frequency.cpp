#include <bits/stdc++.h>
using namespace std;

static bool cmp(pair<int,int> &a , pair<int,int> &b){
    if(a.first == b.first)
        return a.second<b.second ;
    return a.first>b.first;
}

vector<int> solve(vector<int> &arr,int n)
{
        unordered_map<int,int> mp;
        for(auto ch: arr)mp[ch]++;
        
        vector<pair<int,int>> v;
        for(auto p: mp){
            v.push_back({p.second, p.first});
        }
        sort(v.begin(), v.end(), cmp);
        
        vector<int> ans;
        for(auto p : v){
            int n = p.first;
            while(n--){
                ans.push_back(p.second);
            }
        }
        return ans;
}


int main() {
	int t;
	cin>>t;
	
	while(t--){
	    int n;cin>>n;

	    vector<int> arr;
	    for(int i=0; i<n; i++){
	        int x ;
	        cin>>x;
	        arr.push_back(x);
	    }
	    vector<int> ans = solve(arr, n);
	    for(auto x : ans)
	        cout<<x<<" ";
	    cout<<endl;
	}
	return 0;
}