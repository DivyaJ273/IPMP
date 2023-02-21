#include <bits/stdc++.h>
using namespace std;
struct node{
	int data;
	node* next;
};
void intersection(node* head1,node* head2)
{
	node* temp1=head1;
	node* temp2=head2;
	node* prev;	
	while(temp1!=NULL && temp2!=NULL)
	{
		if(temp1->data < temp2->data)
		{
			temp1=temp1->next;
			//cout<<"hey";
		}
		else if(temp1->data==temp2->data)
		{
			temp1=temp1->next;
			prev=temp2;
			temp2=temp2->next;
			//cout<<"hi";
		}
		else
		{
			if(temp2==head2)
			{
				node* temp=head2;
				temp2=temp2->next;
				head2=head2->next;
				free(temp);
				//cout<<"hello";
				//cout<<head2->next->data;
			}
			else
			{
				prev->next=temp2->next;
				node* temp=temp2;
				free(temp);
				temp2=prev->next;
			}
		}
	}
	temp2=NULL;
	node* temp=head2;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	
}
void push(struct node** head,int data)
{
	struct node* newnode=new node;
	newnode->data=data;
	newnode->next=(*head);
	(*head)=newnode;
}
int main()
{
	int m,n,num,i;
	node* head1=NULL;
	node* head2=NULL;
	cout<<"Enter the number of elements in the first sorted linked list:";
	cin>>m;
	cout<<"Enter the elements of the first sorted linked list:";
	for(i=0;i<m;i++)
	{
		cin>>num;
		push(&head1,num);
	}
	cout<<"Enter the number of elements in the second sorted linked list:";
	cin>>n;
	cout<<"Enter the elements of the second sorted linked list:";
	for(i=0;i<n;i++)
	{
		cin>>num;
		push(&head2,num);
	}
	intersection(head1,head2);
	return 0;
}
