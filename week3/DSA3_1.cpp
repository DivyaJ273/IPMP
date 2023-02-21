#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node *next;
	node(int key)
	{
		data=key;
		next=NULL;
	}
};
struct llist{
	node* head;
	llist()
	{	head=NULL;	}
	void newnode(int key)
	{
		node* temp=head;
		node* newn=new node(key);
		if(head==NULL)
		head=newn;
		else
		{
			while(temp!=NULL&temp->next!=NULL)
			temp=temp->next;
			temp->next=newn;
		}
	}
	void find(int m)
	{
		node* temp1=head;
		node* temp2=head;
		if(head==NULL)
		{
			cout<<"empty";
			return;
		}
		int i;
		for(i=1;i<m;i++)
		{
			temp1=temp1->next;
		}
		while(temp1!=NULL && temp1->next!=NULL)
		{
			temp1=temp1->next;
			temp2=temp2->next;
		}
		cout<<temp2->data;		
	}
};

int main()
{
	int i,m,n,num;
	cout<<"Enter the number of elements you wish to add in LL:";
	cin>>n;
	llist ll;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" :";
		cin>>num;
		ll.newnode(num);
		//cout<<"hi";
	}
	cout<<"Enter the index of a element from end:";
	cin>>m;
	ll.find(m);
	return 0;
}
