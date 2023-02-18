#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,x,num;
	cout<<"Enter the number of elements in your array:";
	cin>>n;
	vector <float> v;
	cout<<"Enter the elements of your array:";
	for(i=0;i<n;i++)
	{
		cin>>num;
		v.push_back(num);
	}
	i=0;j=0;
	int flag=1;
	for(i=0;i<n;i++)
	{
		int count=0;
		for(j=i;j>=0;j--)
		{
			count+=v[j];
			if(count==0)
			{
				cout<<"YES";
				flag=0;
				break;
			}
			
		}
		if(flag==0)
		break;;
	}
	if(flag==1)
	cout<<"NO";
	return 0;
}
