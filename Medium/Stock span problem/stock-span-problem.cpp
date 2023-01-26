//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{       
    stack<pair<int,int>>st;
   
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       // Your code here
       
       vector<int>v;
      
       
       for(int i=0;i<n;i++){
           int index=1;
           
           while(!st.empty() && st.top().second<=price[i]){
               index+=st.top().first;
               st.pop();
           }
           
          st.push({index,price[i]});
          v.push_back(index);
           
          
           
           
           
       }
       return v;
       
    }
};



//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int i,a[n];
		for(i=0;i<n;i++)
		{
			cin>>a[i];
		}
		Solution obj;
		vector <int> s = obj.calculateSpan(a, n);
		
		for(i=0;i<n;i++)
		{
			cout<<s[i]<<" ";
		}
		cout<<endl;
	}
	return 0;
}

// } Driver Code Ends