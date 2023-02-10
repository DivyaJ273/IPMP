#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,x;
	vector <int> v;
	cout<<"Enter the number of elements in your array :";
	cin>>n;
	cout<<"Enter the elements of your array:";
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	int val=1;
	for(i=0;i<n+1;i++)
	{
		if(v[i]==val)
		{val++;
		i=0;}
		if(i==n)
		cout<<val;
	}
	return 0;
}
