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
void insert_at_tail(Node* &head,Node* &tail,int val)
{
    Node*  newNode=new Node(val);
    if(head==NULL)
    {
        head=newNode;
        tail=newNode;
        return;
    }
    tail->next=newNode;
    tail=newNode;
}

void sort_linked_list(Node*head)
{
    Node* temp=head;
    for(Node* i=temp;i!=NULL;i=i->next)
    {
        for(Node* j=i->next;j!=NULL;j=j->next)
        {
            if(i->val<j->val)
            {
                swap(i->val,j->val);
            }
        }
    }
    
}
void print_middle(Node* head)
{
    Node* temp=head;
    int count=0;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }

    int middleIndex=count / 2 ;
    
    if(count % 2==0)
    {
        temp=head;

        for(int i=0;i<middleIndex-1;i++)
        {
            temp=temp->next;
        }

        cout<<temp->val<<" "<<temp->next->val;
    }

    else {
        temp=head;
          for(int i=0;i<middleIndex;i++)
          {
            temp=temp->next;
          }
    
        cout<<temp->val;
    }
}

int main()
{
    Node* head=NULL;
    Node* tail=NULL;
    int val;
    while(true)
    {
        cin>>val;
        if(val==-1)
        {
            break;
        }
     insert_at_tail(head,tail,val);
    }

    sort_linked_list(head);
     print_middle(head);
   
    return 0;
}