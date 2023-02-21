#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
	int flag;
};
void push(struct node** head,int data)
{
	struct node* newnode=new node;
	newnode->data=data;
	newnode->next=(*head);
	newnode->flag=0;
	(*head)=newnode;
}
bool loop(struct node* head)
{
	while(head!=NULL)
	{
		if(head->flag==1)
		return true;
		(head)->flag=1;
		(head)=(head)->next;
	}
	return false;
}
int main()
{
	int i,m,n,num;
	struct node* head=NULL;
	cout<<"Enter the number of elements you wish to add in LL:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" :";
		cin>>num;
		push(&head,num);
	}
	//head->next->next->next->next=head;
	if(loop(head))
	cout<<"YES";
	else
	cout<<"NO";
	
	return 0;
}
