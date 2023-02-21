#include <bits/stdc++.h>
using namespace std;
class node
{
public:
	int data;
	node* next;
	node(int key)
	{
		data=key;
		next=NULL;		
	}		
};
void find(node* head1,node* head2)
{
	unordered_set <node*> s;
	while(head1!=NULL)
	{
		s.insert(head1);
		head1=head1->next;
	}
	while(head2!=NULL)
	{
		if(s.find(head2)!=s.end())
		{
			cout<<"The common connection is "<<head2->data;
			break;
		}
		head2=head2->next;
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
	struct node* head1=NULL;
	cout<<"Enter the number of elements you wish to add in LL1:";
	cin>>m;
	for(i=0;i<m;i++)
	{
		cout<<"Enter element "<<i+1<<" :";
		cin>>num;
		push(&head1,num);
	}
	struct node* head2=NULL;
	cout<<"Enter the number of elements you wish to add in LL2:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cout<<"Enter element "<<i+1<<" :";
		cin>>num;
		push(&head2,num);
	}
	head1->next->next->next->next=head2->next->next;
	find(head1,head2);
	return 0;
}
