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
vector<int> level_Node(Node* root,int x)
{
    queue<pair<Node*,int>> q;
    if(root) q.push({root,0});
    vector<int> v;

    while(!q.empty())
    {
        pair<Node*,int> p= q.front();
        q.pop();
        Node* par=p.first;
        int level=p.second;
        if(level==x)
        {
            v.push_back(par->val);
        }

        if(par->left) q.push({par->left,level+1});
        if (par->right) q.push({par->right,level+1});
    }
    return v;

}
int main()
{
    Node* root=input_tree();
    int x;
    cin>>x;
    vector<int> v=level_Node(root,x);
    if(v.empty())
    {
        cout<<"Invalid";
    }
    else{
        for(int val:v)
        {
            cout<<val<<" ";
        }
    }
    
   
}