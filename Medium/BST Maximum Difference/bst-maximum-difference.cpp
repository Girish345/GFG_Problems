//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;
#define MAX_HEIGHT 100000

// Tree Node
struct Node {
    int data;
    Node *right;
    Node *left;

    Node(int x) {
        data = x;
        right = NULL;
        left = NULL;
    }
};

Node *insert(Node *tree, int val) {
    Node *temp = NULL;
    if (tree == NULL) return new Node(val);

    if (val < tree->data) {
        tree->left = insert(tree->left, val);
    } else if (val > tree->data) {
        tree->right = insert(tree->right, val);
    }

    return tree;
}


// } Driver Code Ends
//User function Template for C+

class Solution{
public:
    int targetToleaf(Node* curr){
        if(curr->left==NULL && curr->right==NULL) return curr->data;
        int l=0,r=0;
        if(curr->left){
            l=targetToleaf(curr->left);
        }
        if(curr->right){
            r=targetToleaf(curr->right);
        }
        if(l==0) return (r+curr->data);
        if(r==0) return (l+curr->data);
        return (curr->data+min(r,l));
        
    }
    int maxDifferenceBST(Node *root,int target){
        // Code here
        Node* curr=root;
        int rtt=0, ttl=0;
        while(curr!=NULL){
            rtt+=curr->data;
            if(curr->data==target){
                break;
            }
            else if(curr->data>target){
                curr=curr->left;
            }else{
                curr=curr->right;
            }
        }
        if(curr==NULL) return -1;
        
        return (rtt-targetToleaf(curr));
    }
};

//{ Driver Code Starts.

int main() {
    int T;
    cin >> T;
    while (T--) {
        Node *root = NULL;

        int N;
        cin >> N;
        for (int i = 0; i < N; i++) {
            int k;
            cin >> k;
            root = insert(root, k);
        }

        int target;
        cin >> target;
        Solution ob;
        cout << ob.maxDifferenceBST(root, target);
        cout << endl;
    }
}
// } Driver Code Ends