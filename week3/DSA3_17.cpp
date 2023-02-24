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
void sort();
int main()
{
	int n;
	cout<<"Enter the number of elements:";
	cin>>n;
	insert(n);
	sort();
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
void sort()
{
	int i,c0=0,c1=0,c2=0;
	struct node* temp=head;
	while(temp!=NULL)
	{
		if(temp->data==0)
		{
			c0++;
		}
		else if(temp->data==1)
		{
			c1++;
		}
		else if(temp->data==2)
		{
			c2++;
		}
		temp=temp->next;
	}
	temp=head;
	for(i=0;i<c0;i++)
	{
		temp->data=0;
		temp=temp->next;
	}
	for(i=1;i<c1;i++)
	{
		temp->data=1;
		temp=temp->next;
	}
	for(i=2;i<c2;i++)
	{
		temp->data=2;
		temp=temp->next;
	}
}
