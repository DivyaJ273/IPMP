#include <bits/stdc++.h>
using namespace std;
void insert1(int n1);
void insert2(int n2);
struct node{
	int data;
	struct node* next; //next is a pointer that stored address of the nodes next to it
	node(int key)
	{
		data=key;
		next=NULL;
	}
}*head1,*head2,*headi,*headu;
int main()
{
	int n1,n2,i,x; 
	cout<<"no of elements in 1:";
	cin>>n1;
	insert1(n1);
	cout<<"no of elements in 2:";
	cin>>n2;
	insert2(n2);
	headu=head1;
	struct node *temp2=head2;
	for(i=0;i<n2;i++)
	{
		int val=temp2->data;
		int f=0;
		struct node *temp1=head1;
		while(temp1!=NULL)
		{
			if(temp1->data==val)
			{
				struct node* newnode=new node(val);
				newnode->next=headi;
				headi=newnode;
				f=1;
				break;
			}
			temp1=temp1->next;
		}
		if(f==0)
		{
			struct node* newnode=new node(val);
			newnode->next=headu;
			headu=newnode;
		}
		temp2=temp2->next;
	}
	cout<<"Intersection:";
	struct node* temp=headi;
	while(temp!=NULL)
	{
		cout<<temp->data<<" ";
		temp=temp->next;
	}
	cout<<"\nUnion:";
	struct node* temps=headu;
	while(temps!=NULL)
	{
		cout<<temps->data<<" ";
		temps=temps->next;
	}
	return 0;
	
}
void insert1(int n1)
{
	struct node* temp,* newnode;
	int data,i;
    printf("Enter the data of node 1: ");
    scanf("%d", &data);
	head1=new node(data); 
	temp = head1;
    for(i=2; i<=n1; i++)
    {
       	cout<<"Enter the data of node "<<i<<": ";
        scanf("%d", &data);
        newnode=new node(data);
        temp->next = newnode; 
        temp = temp->next; 
    }
}
void insert2(int n2)
{
	struct node* temp,* newnode;
	int data,i;
    printf("Enter the data of node 1: ");
    scanf("%d", &data);
	head2=new node(data); 
	temp = head2;
    for(i=2; i<=n2; i++)
    {
       	cout<<"Enter the data of node "<<i<<": ";
        scanf("%d", &data);
        newnode=new node(data);
        temp->next = newnode; 
        temp = temp->next; 
    }
}


