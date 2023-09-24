#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int val)
    {
        this->val=val;
        this->left=NULL;
        this->right=NULL;
    }
};
Node* input_tree()
{
    Node* root;
    int val;
    cin>>val;
    if(val==-1)
    {
        root=NULL;
    }
    else 
    {
       root=new Node(val);
    }
    queue<Node*> q;
    if(root)
    {
        q.push(root);
    }
    while(!q.empty())
    {
        Node* p= q.front();
        q.pop();

        int l,r;
        cin>>l>>r;
        Node* myLeft;
        Node* myRight;
        if(l==-1)
        {
            myLeft=NULL;
        }
        else{
            myLeft=new Node(l);
        }
        if(r==-1)
        {
            myRight=NULL;
        }
        else{
            myRight=new Node(r);
        }
        p->left=myLeft;
        p->right=myRight;

        if(p->left)
        {
            q.push(p->left);
        }
        if(p->right)
        {
            q.push(p->right);
        }
    }
    return root;
}

void leaf_node(Node* root, queue<int> &q)
{
    if(root==NULL) return;
    if(root->left==NULL && root->right==NULL)
    {
        q.push(root->val);
    }
    leaf_node(root->left,q);
    leaf_node(root->right,q);
}

int max_leaf(Node* root)
{
    queue<int> q;
    leaf_node(root,q);
    int maX=INT_MIN;
    while(!q.empty())
    {
        if(maX<q.front())
        {
            maX=q.front();
        }
        q.pop();
    }
    return maX;
}
int min_leaf(Node* root)
{
    queue<int> q;
    int miN=INT_MAX;
    leaf_node(root,q);
    while(!q.empty())
    {
        if(miN>q.front())
        {
            miN=q.front();
        }
        q.pop();
    }
    return miN;

}

int main()
{
    Node* root= input_tree();
    int mn=min_leaf(root);
    int mx=max_leaf(root);
    cout<<mx<< " "<<mn;
    
    return 0;
}