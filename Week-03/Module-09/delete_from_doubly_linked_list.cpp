#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next;
    Node* prev;
    Node(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
};
void insert_at_position(Node* &head, Node* &tail,int pos,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    Node* temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    newNode->next->prev=newNode;
    newNode->prev=temp;
}
void insert_at_head(Node* &head, Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    newNode->next=head;
    head->prev=newNode;
    head=newNode;

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
    tail->next=newNode;
    newNode->prev=tail;
    tail=newNode;

}
int size(Node* head)
{
    Node* temp=head;
    int cnt=0;
    while(temp!=NULL)
    {
        cnt++;
        temp=temp->next;
    }
    return cnt;
}
void print_normal(Node* head)
{
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void print_reverse(Node* tail)
{
    Node* temp=tail;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->prev;
    }
    cout<<endl;

}
int main()
{
    // Node* head=NULL;
    // Node* tail=NULL;

    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b= new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    head->next=a;
    a->prev=head;
    a->next=b;
    b->prev=a;
    b->next=c;
    c->prev=b;
    c->next=d;
    d->prev=c;
    Node* tail=d;

    int pos,val;
    cin>>pos>>val;
    // int val;
    //  cin>>val;
    if(pos==0)
    {
        insert_at_head(head,tail,val);
         print_normal(head);
    }
    else if (pos>=size(head))
    {
        cout<<"Invalid!"<<endl;

    }
    else{
        insert_at_position(head,tail,pos,val);
        print_normal(head);
    }
    // cout<<size(head);
   



    // insert_at_position(head,tail,pos,val);
    // insert_at_head(head,tail,val);
    // insert_at_tail(head,tail,val);


    // print_normal(head);
    // print_reverse(tail);

  

    return 0;
}