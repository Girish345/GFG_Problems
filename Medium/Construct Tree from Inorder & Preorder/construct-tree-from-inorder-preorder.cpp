//{ Driver Code Starts
//

#include<bits/stdc++.h>
using namespace std;

struct Node
{
	int data;
	struct Node *left;
	struct Node *right;
	
	Node(int x){
	    data = x;
	    left = NULL;
	    right = NULL;
	}
};


void printPostOrder(Node *root)
{
	if(root==NULL)
		return;
	printPostOrder(root->left);
	printPostOrder(root->right);
	cout<<root->data<<" ";
}

// } Driver Code Ends

/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    int find(int x,int in[],int i,int j)
    {
        for(int c=i;c<j+1;c++){
        if(in[c]==x)
        return c;}
    }
    public:
    Node* buildTree(int in[],int pre[], int n)
    {
      return f(in,pre,0,n-1,0,n-1,n);
    }
    Node* f(int in[],int pre[], int i,int j,int x,int y,int n)
    {
        if(j<-1||i<-1||y<-1||x<-1||y>n-1||x>n-1||j>n-1||i>n-1||i>j || x>y)
        return NULL;
        Node* t=new Node(pre[i]);
        int c=find(pre[i],in,x,y); 
        t->left=f(in,pre,i+1,i+c-x,x,c-1, n);
        t->right=f(in,pre,i+c-x+1,j,c+1,y, n);
        return t;
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
		
		int inorder[n], preorder[n];
		for(int i=0; i<n; i++)
			cin>> inorder[i];
		for(int i=0; i<n; i++)
			cin>> preorder[i];
		Solution obj;
		Node *root = obj.buildTree(inorder, preorder, n);
		printPostOrder(root);
		cout<< endl;
	}
}

// } Driver Code Ends