#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,x;
	vector <int> v;
	cout<<"Enter the number of elements in your array: ";
	cin>>n;
	cout<<"Enter the elements of your array: ";
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	i=-1;
	j=0;
	while(j<n)
	{
		if(v[j]!=0)
		{
			i++;
			if((i)!=j)
			{
				int temp=v[j];
				v[j]=v[i];
				v[i]=temp;
			}
		}
		j++;
	}
	for(i=0;i<n;i++)
	cout<<v[i]<<" ";
}
