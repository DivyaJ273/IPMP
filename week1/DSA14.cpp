#include <bits/stdc++.h>
using namespace std;
void swap(int *a,int *b)
	{
		int temp=*a;
		*a=*b;
		*b=temp;
	}
int main()
{
	int i,j,n,x;
	vector <int> v;
	cout<<"Enter the number of elements in your array: ";
	cin>>n;
	cout<<"Enter the elements of your array:";
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	i=-1;
	j=0;
	while(v[j]<0&&j<n)
	j++;//first positive number
	swap(&v[++i],&v[j]);
	j=1;
	int count=1;
	while(j<n)
	{
		if(v[j]*pow(-1,count)>0)
		{
			swap(&v[++i],&v[j]);
			count++;
			j=count-1;
		}
		j++;
	}
	for(i=0;i<n;i++)
	cout<<v[i]<<" ";
}
