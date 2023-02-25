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
void edit();
int main()
{
	int n,k;
	cout<<"Enter the number of elements:";
	cin>>n;
	insert(n);
	edit();
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
void edit()
{
	struct node* prev=head;
	struct node* temp=head->next;
	while(temp!=NULL)
	{
		if(temp->data==prev->data)
		{
			prev->next=temp->next;
			temp=temp->next;
		}
		else
		{
			prev=temp;
			temp=temp->next;
		}
	}
}

