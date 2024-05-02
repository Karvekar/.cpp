#include<iostream>
using namespace std;
class stack
{
public:
int data;
stack *next;
public:
void push(stack **head,int data)
{
stack* newt=new stack();
newt->data=data;
newt->next=*head;
*head=newt;
cout<<"Inserted : "<<newt->data<<endl;
}
void pop(stack **head)
{
stack *t=*head;
stack *prev;
if(*head==NULL)
{
cout<<"List is empty \n";
}
if(t->next==NULL)
{
*head=NULL;
cout<<"\nDeleted : "<<t-data<<endl;
}
while(t->next!=NULL)
{
prev=t;
t=t->next;
}
prev->next=NULL;
cout<<"Deleted element : "<<t->data<<endl;
delete(t);
}
void display(stack* node)
{
cout<<"\nLinked list : ";
while(node!=NULL)
{
cout<<node->data<<" ";
node=node->next;
}
cout<<endl;
}
};

int main()
{
stack s;
stack* head=NULL;
int ch;
while(ch!=0)
{
cout<<"Enter Data : ";
cin>>s.data;
s.push(&head,s.data);
s.display(head);

cout<<"\nContinue : 1/0 : ";
cout<<"\n--------------------------------------"<<endl;
cin>>ch;
}
if(ch==0)
{
s.pop(&head);
}
}
