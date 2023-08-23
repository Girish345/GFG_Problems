//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
public:
	vector<vector<int>>searchWord(vector<vector<char>>grid, string word){
	    // Code here
	    
	      vector<vector<int>>ans;
    
    for(int i=0;i<grid.size();i++)
    {
        for(int j=0; j<grid[i].size();j++)
        {
            if(grid[i][j]==word[0])
            {
                bool found=false;
                
                for(int k1=-1;k1<2;k1++)
                {
                    for(int k2=-1;k2<2;k2++)
                    {
                        if(found)
                            break;
                        if(k1==0&&k2==0)
                        {
                            continue;
                        }
                        else
                        {
                            int tempi=i;
                            int tempj=j;
                            int l;
                            for(l=0;l<word.size();l++)
                            {
                                if(tempi>=0 && tempj>=0 && tempi<grid.size() && tempj<grid[i].size() && grid[tempi][tempj]==word[l])
                                {
                                    tempi+=k1;
                                    tempj+=k2;
                                }
                                else
                                {
                                    break;
                                }
                            }
                            if(l==word.size())
                            {
                                found=true;
                                ans.push_back({i,j});
                            }
                        }
                    }
                }
            }
        }
    }
    sort(ans.begin(),ans.end());
    return ans;
  
	}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n, m;
		cin >> n >> m;
		vector<vector<char>>grid(n, vector<char>(m,'x'));
		for(int i = 0; i < n; i++){
			for(int j = 0; j < m; j++)
				cin >> grid[i][j];
		}
		string word;
		cin >> word;
		Solution obj;
		vector<vector<int>>ans = obj.searchWord(grid, word);
		if(ans.size() == 0)
		{
		    cout<<"-1\n";
		}
		else
		{
		    for(auto i: ans){
			for(auto j: i)
				cout << j << " ";
			cout << "\n";
		    }
		}
		
		
	}
	return 0;
}
// } Driver Code Ends