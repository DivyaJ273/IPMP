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
}*head;
void insert(int n);
void swap(int n,int k);
int main()
{
	int n,k;
	cout<<"Enter the number of elements:";
	cin>>n;
	cin>>k;
	insert(n);
	swap(n,k);
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
void swap(int n,int k)
{
	struct node* temp=head;
	int i;
	for(i=0;i<k-1;i++)
	{
		temp=temp->next;
	}
	int val=temp->data;
	for(i=0;i<n-2*k+1;i++)
	{
		temp=temp->next;
	}
	int val2=temp->data;
	temp->data=val;
	temp=head;
	for(i=0;i<k-1;i++)
	{
		temp=temp->next;
	}
	temp->data=val2;
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

