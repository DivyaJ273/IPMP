#include <bits/stdc++.h>
using namespace std;
int main()
{
	vector <int> v;
	int i,n,x;
	cout<<"Enter the number of elements in your vector:";
	cin>>n;
	cout<<"Enter the elements of your vector:"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	sort(v.begin(),v.end());
	int count=0;
	for(i=1;i<n;i++)
	{
		if(v[i]==v[i-1])
		{
			cout<<v[i]<<" ";
			count++;
		}
		if(count==2)
		break;
	}
}
