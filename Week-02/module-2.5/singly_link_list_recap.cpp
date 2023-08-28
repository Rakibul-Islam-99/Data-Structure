#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node(int val)
    {
        this->val=val;
        this->next=NULL;
    }
};
void insert_at_tail(Node* &head,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
}
void print_link_list(Node* head)
{
    cout<<endl<<"Your linked list is : ";
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}
int main()
{
    // Node* head=new Node(10);
    // Node* a=new Node(20);
    // Node* b=new Node(30);
    // Node* c=new Node(40);
    // head->next=a;
    // a->next=b;
    // b->next=c;
    Node* head=NULL;
    int val;
    cout<<"Enter the link list value : ";
    while(true)
    {

        cin>>val;
        if(val==-1)
        {
            break;
        }
        insert_at_tail(head,val);

    }
    
    print_link_list(head);
   
    return 0;
}