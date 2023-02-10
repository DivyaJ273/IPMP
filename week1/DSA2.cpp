#include <bits/stdc++.h>
using namespace std;
int answer(vector <int> v, int n);
int main()
{
	int i,n,x;
	vector <int> v;
	cout<<"Enter the number of elements in your array:";
	cin>>n;
	cout<<"Enter the elements of your array:";
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}	
	int ans=answer(v,n);
	cout<<ans;
	return 0;
}
int answer(vector <int> v, int n)
{
	int i,count;
	sort(v.begin(),v.end());
	for(i=1;i<n;i++)
	{
		count=1;
		while(v[i]==v[i-1])
		{
			i++;
			count++;
		}
		if(count%2==1)
		{
			return v[i-1];
		}	
	}
	return 0;
}
