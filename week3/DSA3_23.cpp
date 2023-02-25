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
	if(head->data==head->next->data)
	{
		struct node* prev=head->next;
		head=head->next->next;
		while(head->next!=NULL)
		{
			if(prev->data==head->data || head->data==head->next->data)
			{
				head=head->next;
				prev=prev->next;
			}
			else
			break;
		}
	}
	struct node* temp=head;
	while(temp->next!=NULL)
	{
		struct node* prevl=temp;
		struct node* prev=temp;
		temp=temp->next;
		while(temp->next!=NULL)
		{
			if(prev->data==temp->data || temp->data==temp->next->data)
			{
				temp=temp->next;
				prev=prev->next;
			}
			else
			break;
		}
		if(temp->next==NULL && temp->data==prev->data)
		{
			prevl->next=NULL;
			break;
		}
		prevl->next=temp;
	}
	temp=head;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
}

