//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
    //Function to find the smallest window in the string s consisting
    //of all the characters of string p.
    string smallestWindow (string s, string t)
    {
        // Your code here
         unordered_map<char,int>mp;
         for(auto it:t){
            mp[it]++;
        }
        int i=0;
        int j=0;
        int jt=0;
        int n=s.size();
        int count=mp.size();
        int mini=INT_MAX;
       


        while(j<n){
            mp[s[j]]--;
            if(mp[s[j]]==0){
                count--;
            }

            if(count==0){
                while(count==0){
                    if(j-i+1<mini){
                        mini=j-i+1;
                        jt=i;

                    }

                    mp[s[i]]++;
                    if(mp[s[i]]>0){
                        count++;
                    }
                    i++;
                }
            }







            j++;
        }

        if(mini==INT_MAX){
            return "-1";
        }else{
            return s.substr(jt,mini);
        }
        
    }
};

//{ Driver Code Starts.
int main()
 {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        string pat;
        cin>>pat;
        Solution obj;
        cout<<obj.smallestWindow(s, pat)<<endl;
        
    }
	return 0;
}
// } Driver Code Ends