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
	int ls[n];
	int rs[n];
	ls[0]=v[0];
	rs[0]=v[n-1];
	for(i=1;i<n;i++)
	{
		ls[i]=ls[i-1]+v[i];
		rs[i]=rs[i-1]+v[n-1-i];
	}
	for(i=0;i<n;i++)
	{
		if(ls[i]==rs[n-3-i])
		{
			cout<<i+1;
			return 0;
		}
	}
	cout<<-1;
	return 0;
}
	
	
	
