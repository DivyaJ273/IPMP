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
void rotate(int n);
int main()
{
	int n,k;
	cout<<"Enter the number of elements:";
	cin>>n;
	insert(n);
	rotate(n);
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
void rotate(int n)
{
		struct node* phead=head;
		struct node* store=head;
		int i;
		store=store->next;
		int count=0;
		while(count!=n/2)
		{
			struct node* sec=head;
			sec=sec->next->next;	
			struct node *prev=head,*nextn;
			struct node *cur=head->next;
			while(cur!=sec)
			{
				nextn=cur->next;
				cur->next=prev;
				prev=cur;
				cur=nextn;
			}
			head->next=sec;
			phead->next=prev;
			phead=head;
			head=cur;
			count++;
		}
		if(count*2<n)
		{
			struct node *prev=head;
			struct node *cur=prev->next, *nextn;
			while(cur!=NULL)
			{
				nextn=cur->next;
				cur->next=prev;
				prev=cur;
				cur=nextn;
			}
			phead->next=prev;
			head->next=NULL;
			if(n<2)
			store=prev;
		}
		head=store;
}

