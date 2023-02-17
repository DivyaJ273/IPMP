#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,n,x,num,diff,val;
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
	sort(v.begin(),v.end());
	for(i=0;i<n-2;i++)
	{
		int l=i+1;
		int r=n-1;
		while(l<r)
		{
			if(abs(v[l]+v[r]+v[i]-x)<diff)
			{
				diff=abs(v[l]+v[r]+v[i]-x);
				val=v[l]+v[r]+v[i];
			}
			else if(v[l]+v[r]+v[i]-x>0)
			r--;
			else
			l++;
		}
	}
	cout<<val;
	return 0;
}
