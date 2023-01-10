//{ Driver Code Starts
//Initial template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  
    /*You are required to complete this method */
    public:
    int atoi(string str) 

    {

        //Your code here

         int res = 0;

        bool flag = false;

        int n=str.size();

        for(int i=0; i<n; i++)

        {

            if(str[i]>='0' && str[i]<='9')

            {

                res=res*10+str[i]-'0';

            }

            else if(str[i]=='-'&&!flag&&i==0)

                  flag=true;

            else

                return -1;

        }

        if(flag)

          return res*(-1);

         return res;  

        
     
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
		Solution ob;
		cout<<ob.atoi(s)<<endl;
	}
}
// } Driver Code Ends