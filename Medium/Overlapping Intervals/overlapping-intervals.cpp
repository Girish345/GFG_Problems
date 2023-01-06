//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
    vector<vector<int>> overlappedInterval(vector<vector<int>>& interval) {
         // Code here
         
          vector<vector<int>>result;
            if(interval.size()==0){
                return result;
            }

            sort(interval.begin(),interval.end());

            result.push_back(interval[0]);
            int j=0;

            for(int i=1;i<interval.size();i++){
                if(result[j][1]>=interval[i][0]){
                    result[j][1]=max(result[j][1],interval[i][1]);
                }
                else{
                    j++;
                    result.push_back(interval[i]);
                }
            }
            return result;
         
    }
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		vector<vector<int>>Intervals(n);
		for(int i = 0; i < n; i++){
			int x, y;
			cin >> x >> y;
			Intervals[i].push_back(x);
			Intervals[i].push_back(y);
		}
		Solution obj;
		vector<vector<int>> ans = obj.overlappedInterval(Intervals);
		for(auto i: ans){
			for(auto j: i){
				cout << j << " ";
			}
		}
		cout << "\n";
	}
	return 0;
}
// } Driver Code Ends