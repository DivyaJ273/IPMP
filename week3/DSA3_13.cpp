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
void rotate(int k);
int main()
{
	int n,k;
	cout<<"Enter the number of elements:";
	cin>>n;
	insert(n);
	cout<<"Enter the number of elements to roate:";
	cin>>k;
	rotate(k);
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
void rotate(int k)
{
	int i;
	struct node* temp=head;
	while(temp!=NULL && temp->next!=NULL)
	temp=temp->next;
	temp->next=head;
	for(i=0;i<k;i++)
	temp=temp->next;
	head=temp->next;
	temp->next=NULL;	
}

