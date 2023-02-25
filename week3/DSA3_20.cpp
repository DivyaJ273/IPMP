#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
	node(int key)
	{
		data=key;
		next=NULL;
	}
}*head,*head1,*head2;
void insert(int n);
void arrange();
int main()
{
	int n,k;
	cout<<"Enter the number of elements:";
	cin>>n;
	insert(n);
	arrange();
}
void insert(int n)
{
	int data;
	cout<<"Enter data:";
	cin>>data;
	struct node* newnode=new node(data);
	head=newnode;
	struct node* temp=head;
	int i;
	for(i=1;i<n;i++)
	{
		cin>>data;
		struct node* newnode=new node(data);
		temp->next=newnode;
		temp=temp->next;
	}
}
void arrange()
{
	struct node *head1=head,*temp1=head;
	struct node *head2=head->next,*temp2=head->next;
	while(temp2!=NULL && temp2->next!=NULL)
	{
		temp1->next=temp2->next;
		temp2->next=temp2->next->next;
		temp1=temp1->next;
		temp2=temp2->next;
	}
	temp1->next=NULL;
	cout<<"LL1:\n";
	struct node* temps=head1;
	while(temps!=NULL)
	{
		cout<<temps->data<<" ";
		temps=temps->next;
	}
	temps=head2;
	cout<<"LL2:\n";
	while(temps!=NULL)
	{
		cout<<temps->data<<" ";
		temps=temps->next;
	}
}

