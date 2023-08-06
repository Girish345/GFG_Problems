//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    public:
    //Complete this function
    
    vector<string> permutation(string S)
    {
        //Your code here
        //ABSG
        vector<string> ans;
        solve(S , 0 , ans);
        sort(ans.begin() , ans.end());
        return ans;
    }
    void solve(string &S ,int ind , vector<string> &ans)
    {
        if(ind >= S.size()){
            //S.is over 
            ans.push_back(S);
            return;
        }
        //at index ind , we have options from [ind ---- S.size()-1] to swap
        for(int i = ind ; i<S.size();i++)
        {
            swap(S[i] , S[ind]);
            solve(S , ind+1 , ans);
            swap(S[i] , S[ind]);
        }
        return;
    }
};

//{ Driver Code Starts.

int main()
{
	int T;
	cin>>T;
	while(T--)
	{
		string S;
		cin>>S;
		Solution ob;
		vector<string> vec = ob.permutation(S);
		for(string s : vec){
		    cout<<s<<" ";
		}
		cout<<endl;
	
	}
	return 0;
}
// } Driver Code Ends