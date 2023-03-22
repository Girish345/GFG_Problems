//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++
class Solution{   
public:
   long long ans=0;
    stack<char>s;
  string stri(int x, string &a,char c,char d)
   {
        
     
     s.push(a[0]); 
     string temp="";
     temp+=a[0];
      for(int i=1;a[i]!='\0';i++)
      {    
          if(!s.empty()){
          if(a[i]==d&&s.top()==c)
          {    ans+=x;
              s.pop();
              temp.pop_back();
          }
          else{ s.push(a[i]);
          temp+=a[i];
          }
          }
          else
          {
              s.push(a[i]);
          temp+=a[i];
          }
      }
      while(!s.empty())  s.pop(); 
      return temp;
   }
    long long solve(int x,int y,string a){
      //code here
      char c,d;
      if(x>y){ 
          c='p';
          d='r';
         
      }
      else 
      {
          c='r';
          d='p';
          swap(x,y);
      }
      bool flag =true;
      string temp=a;
      string t;

      while(flag)
      {
          t= stri(x,temp,c,d);
         if(t==temp) break;
         temp=t;
          
      }
      flag =true;
      while(flag)
      {
          t= stri(y,temp,d,c);
         if(t==temp) break;
         temp=t;
          
      }
      return ans;
      
    }
};

//{ Driver Code Starts.
signed main()
{
  int t;
  cin>>t;
  while(t--)
  {
      int X,Y;
      cin>>X>>Y;
      string S;
      cin>>S;
      Solution obj;
      long long answer=obj.solve(X,Y,S);
      cout<<answer<<endl;
  }
}
// } Driver Code Ends