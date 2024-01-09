#include <bits/stdc++.h>
using namespace std;
class Node{
    public:
    int key;
    Node* next;
};
void push(Node** head_ref,int new_key){
    Node* node1=new Node();
    node1->key=new_key;
    node1->next=(*head_ref);
    (*head_ref)=node1;
}
void insertAfter(Node* prev_node,int new_key){
    Node* node1=new Node();
    node1->key=new_key;
    node1->next=prev_node->next;
    prev_node->next=node1;
}
int main(){
    Node*head=NULL;
    int x=8;
    push(&head,10);
    push(&head,30);
    push(&head,11);
    push(&head,21);
    push(&head,14);
    vector<int>v;
    Node*temp=head;
    while(temp!=NULL){
        v.push_back(temp->key);
        temp=temp->next;
    }
    vector<int>::iterator it;
    find(v.begin(),v.end(),x);
    if(it==v.end()){
        cout<<"NO"<<endl;
    }
    else{
        cout<<"YES"<<endl;
    }
}