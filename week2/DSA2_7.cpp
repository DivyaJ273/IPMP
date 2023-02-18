#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,num;
	cout<<"Enter the number of elements in your array:";
	cin>>n;
	vector <float> v;
	cout<<"Enter the elements of your array:";
	for(i=0;i<n;i++)
	{
		cin>>num;
		v.push_back(num);
	}
	sort(v.begin(),v.end());
	i=0;
	j=n-1;
	int ans=INT_MAX;
	int n1,n2;
	while(i<j)
	{
		if(abs(v[i]+v[j])>ans)
		{
			if(v[i]+v[j]>0)
			j--;
			else
			i++;
		}
		else
		{
			n1=v[i];
			n2=v[j];
			ans=abs(v[i]+v[j]);
			if(abs(v[i+1]+v[j])>abs(v[i]+v[j-1]))
			j--;
			else
			i++;
		}
	}
	cout<<n1<<" "<<n2;
}
