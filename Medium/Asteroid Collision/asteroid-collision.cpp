//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> asteroidCollision(int N, vector<int> &asteroids) {
        // code here
        stack<int>s;
        
        
        for(int i=0;i<N;i++){
            if(s.empty() or asteroids[i]>0){
                s.push(asteroids[i]);
               
            }
            
            else{
                while(true){
                    int top=s.top();
                    if(top<0){
                        s.push(asteroids[i]);
                        break;
                    }
                    else if(top==(-asteroids[i])){
                        s.pop();
                        break;
                    }
                    else if(top>(-asteroids[i])){
                        break;
                    }
                    else{
                        s.pop();
                        
                        if(s.empty()){
                            s.push(asteroids[i]);
                            break;
                        }
                    }
                }
            }
        }
        
        vector<int>v(s.size(),0);
        for(int i=s.size()-1;i>=0;i--){
            v[i]=s.top();
            s.pop();
        }
        return v;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;

        vector<int> asteroids(N);
        for (int i = 0; i < N; i++) cin >> asteroids[i];

        Solution obj;
        vector<int> ans = obj.asteroidCollision(N, asteroids);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends