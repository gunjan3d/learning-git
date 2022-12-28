#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertatbottom(node* &head, int val)
{
    node* n=new node(val);
    if(head==NULL)
    {
        head=n;
        return;
    }
    node* temp=head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}
node* reverse(node* &head)
{
    node* prev=NULL;
    node* curr=head;
    node* nxt;
    while(curr!=NULL)
    {
        nxt=curr->next;
        nxt=curr;
        curr=prev;
    }
    return curr;
}
void display(node*&head)
{
    node* temp=head;
    cout<<endl;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int main()
{
    node*  head=NULL;
    for(int i=0;i<10;i++)
    {
        insertatbottom(head,i);
    }
    display(head);
    node* reversehead=reverse(head);
    display(reversehead);
    return 0;
}