//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    int longestUniqueSubsttr(string s){
        //code
         int freq[26]={0};
        int i=0;
        int j=0;
        int n=s.size();
        int mx=0;

        while(j<n){
            if(freq[s[j]-'a']==0){
                freq[s[j]-'a']++;
                mx=max(mx,j-i+1);
                j++;
            }
            
            else{
                freq[s[i]-'a']--;
                i++;
            }
        }
        return mx;
        
          
        
        
        
    }
};

//{ Driver Code Starts.
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		string str;
		cin>>str;
		Solution ob;
		cout<<ob.longestUniqueSubsttr(str)<<endl;
	}
	return 0;
}
// } Driver Code Ends