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
	vector <int> ans(n+2);
	for(i=0;i<n;i++)
	ans[(v[i])]=1;
	for(i=1;i<=n+1;i++)
	{if(ans[i]!=1)
	cout<<i<<" ";}
	return 0;
}
