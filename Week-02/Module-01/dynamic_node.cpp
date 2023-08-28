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
int main()
{
    // Node* head=new Node(10);
    // Node* a=new Node(20);
    // head->next_node=a;
    // cout<<head->val<<endl;
    // cout<<a->val<<endl;
    // cout<<head->next_node->val<<endl;
    // cout<<(*(*head).next_node).val<<endl;
    Node* node = new Node(5);
cout << node->val << endl;
  

    return 0;
}