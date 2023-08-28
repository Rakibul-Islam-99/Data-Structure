#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_head(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
        newNode->next=head;
        head=newNode;
    
    if(tail==NULL)
    {
        tail=head;
    }

}
void insert_at_tail(Node* &head, Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=tail;
    tail=newNode;

}
int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int q;
    cin>>q;
    while(q--)
    {
        int pos,val;
        cin>>pos>>val;
        if(pos==0)
        {
            insert_at_head(head,tail,val);
            cout<<head->val<<" "<<tail->val;
            cout<<endl;

        }
        else if(pos==1)
        {
            insert_at_tail(head,tail,val);
            cout<<head->val<<" "<<tail->val;
            cout<<endl;

        }
    }
  

    return 0;
}