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
void insert_at_any_position(Node* &head,int pos,int val)
{
    Node* newNode=new Node(val);
    // if(pos==0)
    // {
    //     newNode->next=head;
    //     head=newNode;
    //     return;
    // }
    // else{
    Node* temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        //  if(temp==NULL)
        // {
        //     cout<<endl<<endl<<"Invalid index!"<<endl;
        //     return;
        // }
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    // }
   
}

int size(Node* head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;

    }
    return count;
}
void insert_head(Node* &head,int val)
{
    Node* newNode=new Node(val);
    newNode->next=head;
    head=newNode;
}
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;

}
void print_linked_list(Node* head)
{
    cout<<endl<<"Your linked list is: ";
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
    Node* head=new Node(10);
    Node* a=new Node(20);
    Node* b=new Node(30);
    Node* c=new Node(40);
    Node* d=new Node(50);
    Node* tail=d;
    head->next=a;
    a->next=b;
    b->next=c;
    c->next=d;

    int pos,val;
    cout<<"Enter Position & value: "<<endl;
    cin>>pos>>val;
    if(pos>size(head))
    {
        cout<<"Invalid Index!"<<endl;  
    }
    else if(pos==0)
    {
        insert_head(head,val);
        print_linked_list(head);
    }
    else if(pos==size(head))
    {
        insert_at_tail(head,tail,val);
        print_linked_list(head);

    }
    else{
        insert_at_any_position(head,pos,val);
        print_linked_list(head);
    }

    //  print_linked_list(head);
    // cout<<endl<<"Size is : "<<size(head)<<endl;
    // insert_at_any_position(head,0,100);
    // print_linked_list(head);
    // cout<<endl<<"Size is : "<<size(head)<<endl;

  

    return 0;
}