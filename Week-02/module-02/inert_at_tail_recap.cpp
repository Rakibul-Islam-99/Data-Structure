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
void insert_at_tail(Node* &head, int val)
{
    Node* newNode= new Node(val);
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

void print_Linked_List(Node* head)
{
    cout<<"Your Linked List : ";
    Node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next;
    }
    cout<<endl<<endl<<endl;
}
int main()
{
    Node* head=NULL;
    while(true)
    {
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2: Print your Linked List"<<endl;
        cout<<"Option 3: Code terminated"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please insert a value: ";
            int val;
            cin>>val;
            insert_at_tail(head,val);
            cout<<endl;
            cout<<"Value is inserted!"<<endl<<endl;
        }
        else if(op==2)
        {
            print_Linked_List(head);
        }
        else if(op==3)
        {
            break;
        }
    }


    return 0;
}