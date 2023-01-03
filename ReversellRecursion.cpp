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
void solve(node* &head,node* curr, node* prev)
{
    if(curr==NULL)
    {
        head=prev;
        return;
    }
    node* frwd=curr->next;
    curr->next=prev;
    solve(head,frwd,curr);
}
node* reverse(node* head)
{
    node* curr=head;
    node* prev=NULL;
    solve(head,curr,prev);
    return head;
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