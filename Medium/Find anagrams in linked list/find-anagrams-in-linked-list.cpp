//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

struct Node {
    char data;
    struct Node *next;

    Node(char x) {
        data = x;
        next = NULL;
    }
};

void printList(Node *node) {
    while (node != NULL) {
        cout << node->data << " ";
        node = node->next;
    }
    cout << endl;
}

struct Node *inputList() {
    int n; // length of link list
    scanf("%d ", &n);

    char data;
    cin >> data;
    struct Node *head = new Node(data);
    struct Node *tail = head;
    for (int i = 0; i < n - 1; ++i) {
        cin >> data;
        tail->next = new Node(data);
        tail = tail->next;
    }
    return head;
}


// } Driver Code Ends
/*

Definition for singly Link List Node
struct Node
{
    char data;
    Node* next;
    Node(int x) {  data = x;  next = NULL; }
};

You can also use the following for printing the link list.
printList(Node* node);
*/

class Solution {
  public:
    vector<Node*> findAnagrams(struct Node* head, string s) {
        // code here
        
        
          vector<int>a(26,0),b(26,0);

        vector<Node*>ans;

        for(int i=0;i<s.size();i++)

            b[s[i]-'a']++;

        int i=0,j=0;

        Node* f=head,*sl=head;

        while(f!=NULL)

        {

            char p=f->data;

            a[p-'a']++;

            if(j-i+1==s.size())

            {

                bool ok=true;

                for(int k=0;k<26;k++)

                    if(a[k]!=b[k])

                        ok=false;

                if(ok==true)

                {

                    Node* head1=new Node(sl->data);

                    Node*p=head1;

                    sl=sl->next;

                    while(sl!=NULL and f!=NULL and sl->next!=NULL and sl!=f)

                    {

                        Node*k=new Node(sl->data);

                        p->next=k;

                        p=k;

                        sl=sl->next;

                    }

                    Node*k=new Node(sl->data);

                    p->next=k;

                    p=k;

                    sl=sl->next;

                    for(int l=0;l<26;l++)

                        a[l]=0;

                    i=j+1;

                    ans.emplace_back(head1);

                }

                else

                {

                    char d=sl->data;

                    a[d-'a']--;

                    i++;

                    sl=sl->next;

                }

            }

            j++;

            f=f->next;

        }

        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {

        struct Node *head = inputList();

        string s;
        cin >> s;

        Solution obj;
        vector<Node *> res = obj.findAnagrams(head, s);

        for (int i = 0; i < res.size(); i++) {
            printList(res[i]);
        }

        if (res.size() == 0) cout << "-1\n";
    }
}

// } Driver Code Ends