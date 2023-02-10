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
	vector <int> v1(n+1);
	for(i=0;i<n;i++)
	v1[v[i]]++;
	for(i=1;i<=n;i++)
	{
		if(v1[i]==2)
		cout<<i<<" is present twice"<<endl;
		if(v1[i]==0)
		cout<<i<<" is not present";
	}
	return 0;
}
