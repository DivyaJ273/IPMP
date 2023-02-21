#include <bits/stdc++.h>
using namespace std;
struct node
{
	int data;
	struct node* next;
};
void mid(struct node* head)
{
	int nodenum=0;
	struct node* mid=head;
	if(head->next==NULL)
	cout<<head->data;
	else
	{
		while(head!=NULL)
		{
			if(nodenum%2==1)
			mid=mid->next;
			nodenum++;
			head=head->next;
		}
		cout<<mid->data;
	}
}
void push(struct node** head, int data)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node));
	newnode->data=data;
	newnode->next=(*head);
	(*head)=newnode;
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
	mid(head);
	return 0;
}
