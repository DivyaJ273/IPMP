#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	struct node* next;
	node(int key)
	{
		data=key;
		next=NULL;
	}
}*head;
void insert(int n);
void deletell();
int main()
{
	int n;
	cout<<"Enter the number of elements:";
	cin>>n;
	insert(n);
	deletell();
	struct node* temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
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
void deletell()
{
	struct node* temps=head;
	while(temps!=NULL && temps->next!=NULL)
	{
		temps->next=temps->next->next;
		//cout<<temps->data;
		temps=temps->next;
		
	}
}
