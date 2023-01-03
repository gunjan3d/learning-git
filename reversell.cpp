#include<iostream>
using namespace std;
class node
{
    public:
    int data;
    node* next;
    node(int data)
    {
        this->data=data;
        next=NULL;
    }
};
void InsertAtTail(node* &head, int data)
{
    node* n=new node(data);
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
    node* Prev=NULL;
    node* Curr=head;
    node*nxt=NULL;
    while(Curr!=NULL)
    {
        nxt=Curr->next;
        Curr->next=Prev;
        Prev=Curr;
        Curr=nxt;
    }
    return Prev;
}
void Display(node* &head)
{
    node* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}
int main()
{
    node* head=NULL;
    for(int i=0;i<10;i++)
    {
        InsertAtTail(head,i);
    }
    Display(head);
    cout<<endl;
    node* rHead= reverse(head);
    Display(rHead);
    return 0;
}