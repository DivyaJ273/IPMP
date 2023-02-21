#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
	node(int key)
	{
		data=key;
		next=NULL;
	}
};
struct llist{
	node* head;
	
	llist()
	{ head=NULL;
	}
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
	void pal()
	{
		long long ans=0;
		node* temp=head;
		while(temp!=NULL)
		{
			ans=ans*10+temp->data;
			temp=temp->next;
		}
		long long actual=ans;
		long long rev=0;
		while(ans!=0)
		{
			rev=rev*10+(ans%10);
			ans/=10;
		}
		if(actual==rev)
		cout<<"YES";
		else
		cout<<"NO";
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
	}
	ll.pal();
	return 0;
}
