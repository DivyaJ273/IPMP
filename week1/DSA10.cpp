#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,x;
	cout<<"Enter the number of elements in your array: ";
	cin>>n;
	vector <int> v;
	cout<<"Enter the elements of your array: ";
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	for(i=0;i<n/2;i++)
	{
		int temp=v[i];
		v[i]=v[n-1-i];
		v[n-1-i]=temp;
	}
	for(i=0;i<n;i++)
	cout<<v[i]<<" ";
	return 0;
}
