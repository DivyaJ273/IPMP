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
}*head1,*head2,*head;
void insert1(int n1);
void insert2(int n2);
void merge();
int main()
{
	int n1,n2;
	cout<<"No of elements in the sorted array 1:";
	cin>>n1;
	insert1(n1);
	cout<<"No of elements in the sorted array 2:";
	cin>>n2;
	insert2(n2);
	merge();
	struct node* temps=head;
	while(temps!=NULL)
	{
		cout<<temps->data<<" ";
		temps=temps->next;	
	}
	return 0;	
}
void insert1(int n1)
{
	int i,val;
	struct node* temp,* newnode;
	cout<<"Enter data:";
	cin>>val;
	newnode=new node(val);
	head1=newnode;
	temp=head1;
	for(i=1;i<n1;i++)
	{
		cin>>val;
		newnode=new node(val);
		temp->next=newnode;
		temp=temp->next;
	}
}
void insert2(int n2)
{
	int i,val;
	struct node* temp,* newnode;
	cout<<"Enter data:";
	cin>>val;
	newnode=new node(val);
	head2=newnode;
	temp=head2;
	for(i=1;i<n2;i++)
	{
		cin>>val;
		newnode=new node(val);
		temp->next=newnode;
		temp=temp->next;
	}
}
void merge()
{
	struct node* temp1=head1,* temp2=head2;
	struct node* newnode;

	if(temp1->data > temp2->data)
	{
		newnode=new node(head2->data);
		head=newnode;
		temp2=temp2->next;
	}
	else if(temp1->data < temp2->data)
	{
		newnode=new node(head1->data);
		head=newnode;
		temp1=temp1->next;
	}
	else
	{
		newnode=new node(head1->data);
		head=newnode;
		temp1=temp1->next;
		temp2=temp2->next;
	}
	struct node* temp=head;
	while(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->data > temp2->data)
		{
			newnode=new node(temp2->data);
			temp->next=newnode;
			temp=temp->next;
			temp2=temp2->next;
		}
		else if(temp1->data < temp2->data)
		{
			newnode=new node(temp1->data);
			temp->next=newnode;
			temp=temp->next;
			temp1=temp1->next;
		}
		else
		{
			newnode=new node(temp1->data);
			temp->next=newnode;
			temp=temp->next;
			temp1=temp1->next;
			temp2=temp2->next;
		}
	}
	while(temp1!=NULL)
	{
		newnode=new node(temp1->data);
		temp->next=newnode;
		temp=temp->next;
		temp1=temp1->next;
	}
	while(temp2!=NULL)
	{
		newnode=new node(temp2->data);
		temp->next=newnode;
		temp=temp->next;
		temp2=temp2->next;
	}
}
