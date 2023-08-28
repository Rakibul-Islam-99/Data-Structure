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

void print_linked_list(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
}
// void insert_at_tail(Node* &head,Node* &tail,int val)
// {
//     Node*  newNode=new Node(val);
//     if(head!=NULL)
//     {
//         tail=newNode;
//         return;
//     }
//     tail->next=newNode;
//     tail=newNode;
// }
void insert_at_any_position(Node* &head,int pos,int val)
{
    Node* newNode=new Node(val);
    Node* tail=NULL;

    if(pos==0)
    {
        head=newNode;
        if(head!=NULL)
    {
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
           
    }
    else if (pos==1)
    {
        Node* temp=head;

        temp->next=newNode;
    } 
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;

    int q;
    cin>>q;
    while(q--)
    {
        int pos, val;
        cin>>pos>>val;
        // insert_at_tail(head,tail,val);
        insert_at_any_position(head,pos,val);
        print_linked_list(head);
        cout<<endl;
   
    }
    
    return 0;
}