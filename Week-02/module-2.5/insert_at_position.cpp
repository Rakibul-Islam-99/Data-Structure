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
    if(pos==0)
    {
        newNode->next=head;
        head=newNode;
        return;
    }
    else{
    Node* temp=head;
    for(int i=1;i<=pos-1;i++)
    {
         if(temp==NULL)
        {
            cout<<endl<<endl<<"Invalid index!"<<endl;
            return;
        }
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    }
   
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
    head->next=a;
    a->next=b;
    b->next=c;
    // int pos,val;
    // cin>>pos>>val;
    insert_at_any_position(head,0,100);

    print_linked_list(head);

  

    return 0;
}