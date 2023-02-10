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
	unordered_map <int,int> m;
	for(i=0;i<n;i++)
	{
		m[v[i]]=m[v[i]]+1;
	}
	for(i=0;i<n;i++)
	{
		if (m[v[i]]>n/3)
		{
			cout<<v[i];
			break;
		}
	}
	
