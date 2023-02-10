#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,x,start,min,max;
	cout<<"Enter the number of elements in your array: ";
	cin>>n;
	vector <int> v;
	cout<<"Enter the elements of your array: ";
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	if(n%2==0)
	{
		if(v[0]>v[1])
		{
			max=v[0];
			min=v[1];
		}
		else
		{
			max=v[1];
			min=v[0];
		}
		start=2;
	}
	else
	{
		max=v[0];
		min=v[0];
		start=1;
	}
	for(i=start;i<n-1;i=i+2)
	{
		if(v[i]>v[i+1])
		{
			if(v[i]>max)
			max=v[i];
			if(v[i+1]<min)
			min=v[i+1];
		}
		else
		{
			if(v[i+1]>max)
			max=v[i+1];
			if(v[i]<min)
			min=v[i];
		}
	}
	cout<<"min:"<<min<<" ";
	cout<<"max:"<<max<<" ";
	return 0;
}
