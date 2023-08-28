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
int main()
{
    Node* head1=NULL;
    Node* tail1=NULL;
    Node* head2=NULL;
    Node* tail2=NULL;
    int val1,val2;
    while(true)
    {
        cin>>val1;
        if(val1==-1)
        {
            break;
        }
     insert_at_tail(head1,tail1,val1);
    }
     
     while(true)
    {
        cin>>val2;
        if(val2==-1)
        {
            break;
        }
     insert_at_tail(head2,tail2,val2);
    }
    
     if(size(head1)!=size(head2))
     {
        cout<<"NO";
     }
     else if(size(head1)==size(head2))
     {
        Node* i=head1;
        Node* j=head2;
        int flag=1;
        while(i!=NULL && j!=NULL)
        {
            if(i->val!=j->val)
            {
                flag=0;
                break;
            }
            i=i->next;
            j=j->next;
        }
        if(flag!=0)
        {
            cout<<"YES";
        }
        else{
            cout<<"NO";
        }
        
     }
    
    return 0;
}