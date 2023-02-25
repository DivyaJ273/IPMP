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
void arrange();
int main()
{
	int n,k;
	cout<<"Enter the number of elements:";
	cin>>n;
	insert(n);
	arrange();
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
void arrange()
{
	struct node* store=head;
	struct node* last=head;
	while(last!=NULL && last->next!=NULL)
	{
		last=last->next;
	}
	while(store!=NULL)
	{
		if(store->data % 2==0)
		{
			break;
		}
		else
		store=store->next;
	}
	struct node* temp=head;
	struct node* prev=head;
	struct node* templ=last;
	while(temp!=last)
	{
		if(temp->data % 2!=0)
		{
			if(temp==head)
			head=head->next;
			struct node* newnode=new node(temp->data);
			templ->next=newnode;
			templ=templ->next;
			temp=temp->next;
			if(temp!=head)
			prev->next=temp;	
		}
		else
		{
			prev=temp;
			temp=temp->next;	
		}
	}
	head=store;
}

