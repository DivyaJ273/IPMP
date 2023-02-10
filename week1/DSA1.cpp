#include <bits/stdc++.h>
using namespace std;
vector<int> answer(vector<int>v1,vector<int>v2, int n1,int n2);
int main()
{
	vector <int> v1;
	vector <int> v2;
	vector <int> ans;
	int i,n1,n2,x;
	cout<<"Enter the number of elements u wish to add in the first array: ";
	cin>>n1;
	cout<<"Enter the elements u wish to add in the first sorted array: ";
	for(i=0;i<n1;i++)
	{cin>>x;
	v1.push_back(x);}
	cout<<"Enter the number of elements u wish to add in the second array: ";
	cin>>n2;
	cout<<"Enter the elements u wish to add in the second sorted array: ";
	for(i=0;i<n2;i++)
	{cin>>x;
	v2.push_back(x);}
	ans=answer(v1,v2,n1,n2);
	for(i=0;i<n1+n2;i++)
	cout<<ans[i]<<" ";
	return 0;
}
vector<int> answer(vector<int>v1,vector<int>v2, int n1,int n2)
{
	vector <int> temp;
	int m=0,n=0;
	while(m<n1 && n<n2)
	{
		if(v1[m]<v2[n])
		{
			temp.push_back(v1[m]);
			m++;
		}
		else if(v1[m]>=v2[n])
		{
			temp.push_back(v2[n]);
			n++;
		}
	}
	if(m!=n1)
	{
		while(m!=n1)
		{
			temp.push_back(v1[m]);
			m++;
		}
	}
	if(n!=n2)
	{
		while(n!=n2)
		{
			temp.push_back(v2[n]);
			n++;
		}
	}
	return temp;
}
