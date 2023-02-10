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
		m[v[i]]++;
	}
	int count=0, first_no;
	for(i=0;i<n;i++)
	{
		if(m[v[i]]%2==1)
		{
			first_no=v[i];
			cout<<first_no;
			break;
		}
	}
	for(i=0;i<n;i++)
	{
		if(m[v[i]]%2==1&&v[i]!=first_no)
		{
			cout<<v[i];
			break;
		}
	}
	return 0;
}
