#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,x;
	vector <int> v;
	cout<<"Enter the number of elements in your array: ";
	cin>>n;
	cout<<"Enter the elements of your array: ";
	int n0=0,n1=0,n2=0;
	for(i=0;i<n;i++)
	{
		cin>>x;
		if(x==0)
		n0+=1;
		else if(x==1)
		n1+=1;
		else
		n2+=1;
	}
	for(i=0;i<n0;i++)
	v.push_back(0);
	for(i=0;i<n1;i++)
	v.push_back(1);
	for(i=0;i<n2;i++)
	v.push_back(2);
	for(i=0;i<n;i++)
	cout<<v[i]<<" ";
}
