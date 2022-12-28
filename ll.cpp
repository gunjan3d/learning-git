#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node* next;
    node* prev;
    node(int val)
    {
        data=val;
        next=NULL;
        prev=NULL;
    }
};
void insertathead(node* &head,int val)
{
    node* temp=head;
    node* n= new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    while(temp->next!=NULL)
    {
       temp=temp->next;
    }
    n->prev=temp;
    temp->next=n;
}
void display(node* &head)
{
    node* temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
}
node* gettail(node* &head)
{
  node* temp=head;
  while(temp->next!=NULL)
    {
      temp=temp->next;
    }
  return temp;
}
void displayt(node* &head)
{
    node* temp=gettail(head);
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->prev;
    }
    // temp->data;
}
int main()
{
    node* head=NULL;
    for(int i=0;i<10;i++)
    {
        insertathead(head,i);
    }
    displayt(head);
    cout<<endl;
    cout<<head->data;
    return 0;
}