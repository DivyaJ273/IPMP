#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,x;
	cout<<"Enter the number of elements in your array: ";
	cin>>n;
	float sum=(n*(n+1))/2;
	float mul=1;
	for(i=1;i<=n;i++)
	mul=mul*i;
	vector <int> v;
	cout<<"Enter the elements of your array: ";
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
		sum-=x;
		mul/=x;
	}
	cout<<(sum)/(mul-1);
	return 0;
}
