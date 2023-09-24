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
int total_nodes(Node* root)
{
    int count=0;
    queue<Node*> q;
    if(root) q.push(root);
    while(!q.empty())
    {
        Node* p=q.front();
        q.pop();
        count++;
        if(p->left) q.push(p->left);
        if(p->right) q.push(p->right);
    }
    return count;

}
int max_Height(Node* root)
{
    if(root==NULL) return 0;
    int l=max_Height(root->left);
    int r=max_Height(root->right);
    return max(l,r)+1;

}
bool check_perfect_tree(Node* root)
{
    int Total_nodes=total_nodes(root);
    int mxh=max_Height(root);
    if(pow(2,mxh)-1==Total_nodes)
    {
        return true;
    }
    
    return false;
}
int main()
{
    Node* root=input_tree();
    bool perfect_tree= check_perfect_tree(root);
    if(perfect_tree)
    {
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }
    
     
}