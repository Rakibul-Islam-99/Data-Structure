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
void insert_at_tail(Node* &head,int val)
{
    Node* newNode= new Node(val);
    if(head==NULL)
    {
        head=newNode;
        cout<<endl<<"Insert at head"<<endl<<endl;
        return;
    }

    Node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=newNode;
    cout<<endl<<"Insert at tail"<<endl<<endl;
}

void print_linked_list(Node* head)
{
    cout<<"Your linked list is: ";

    Node*temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl;

}
void insert_at_any_position(Node* &head,int pos,int val)
{
    Node* newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        return;
    }
    Node* temp=head;
    for(int i=1;i<=pos-1;i++)
    {
        temp=temp->next;
    }
    newNode->next=temp->next;
    temp->next=newNode;
    cout<<"Inserted at position "<<pos;
    cout<<endl<<endl;

}
void insert_at_head(Node* &head,int val)
{
    Node* newNode= new Node(val);
    newNode->next=head;
    head=newNode;
    cout<<endl<<"Inserted at head"<<endl<<endl;
}

int main()
{
    Node* head=NULL;
    while(true)
    {
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2: Insert at any Position"<<endl;
        cout<<"Option 3: Insert at head"<<endl;
        cout<<"Option 4: Prnit your linked list"<<endl;
        cout<<"Option 5: Terminate"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Insert a value: ";
            int val;
            cin>>val;
            insert_at_tail(head,val);
            
        }
        else if(op==2)
        {
            int pos,val;
            cout<<"Enter the position: ";
            cin>>pos;
            cout<<endl;
            cout<<"Enter the value: ";
            cin>>val;
            cout<<endl;
            if(pos==0)
            {
                insert_at_head(head,val);
            }
            else{
                insert_at_any_position(head,pos,val);

            }
            
        }
        else if(op==3)
        {
            int val;
            cout<<"Enter the value: ";
            cin>>val;
            insert_at_head(head,val);

        }
        else if(op==4)
        {
            print_linked_list(head);

        }
        else if(op=5)
        {
            break;
        }
    }
  

    return 0;
}