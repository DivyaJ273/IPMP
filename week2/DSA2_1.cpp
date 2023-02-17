#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,x,num;
	cout<<"Enter the number of elements in your array:";
	cin>>n;
	vector <float> v;
	cout<<"Enter the elements of your array:";
	for(i=0;i<n;i++)
	{
		cin>>num;
		v.push_back(num);
	}
	cout<<"Enter the sum value:";
	cin>>x;
	for(i=0;i<n;i++)
	{
		v[i]=v[i]-(x/2.0);
	}
	sort(v.begin(),v.end()); //n.log n
	i=0;
	while(v[i]<0)
	i++;
	if(v[i]==0 && v[i+1]==0)
	{
		cout<<"YES";
		return 0;
	}
	else 
	{
		int ng,ps;
		if(v[i]!=0)
		{
			ps=i;
			ng=i-1;
		}
		else
		{
			int ng=i-1;
			int ps=i+1;
		}
		while(ps!=n && ng!=-1)
		{
		if(v[ng]+v[ps]==0)
		{
			cout<<"YES";
			return 0;
		}
		else if(-v[ng]>v[ps])
		ps++;
		else if(-v[ng]<v[ps])
		n--;
		}
		if(ng!=-1)
		while(ng>=0)
		{
			if(v[ng]+v[ps]==0)
			{
				cout<<"YES";
				return 0;
			}
			ng--;
		}
		if(ps!=n)
		while(ps<n)
		{
			if(v[ng]+v[ps]==0)
			{
				cout<<"YES";
				return 0;
			}
			ps++;
		}
	}
	cout<<"NO";
	return 0;
}
