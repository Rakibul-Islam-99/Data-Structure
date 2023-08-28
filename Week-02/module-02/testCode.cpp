#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int val;
    Node* next_node;
    Node(int val){
        this->val=val;
        this->next_node=NULL;
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
    Node *temp=head;
    while(temp->next_node !=NULL){
        temp=temp->next_node;
    }
    temp->next_node=newNode;
}

void print_linked_list(Node*  head)
{
    cout<<"Your linked list is: ";
    Node *temp=head;
    while(temp!=NULL)
    {
        cout<<temp->val<<" ";
        temp=temp->next_node;
    }
    cout<<endl;
}


int main()
{
    Node* head=NULL;
    while(true)
    {
        cout<<"Option 1: Insert at tail"<<endl;
        cout<<"Option 2; Print your linkied list"<<endl;
        cout<<"Option 3: Terminated"<<endl;
        int op;
        cin>>op;
        if(op==1)
        {
            cout<<"Please enter a value: ";
            int val;
            cin>>val;
            insert_at_tail(head,val);

        }
        else if(op==2)
        {
            print_linked_list(head);

        }
        else if(op==3)
        {
            break;
        }

    }

  

    return 0;
}