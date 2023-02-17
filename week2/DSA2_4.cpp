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
	cout<<"Enter the sum value:";
	cin>>x;
	sort(v.begin(),v.end());
	vector <vector <int> > vv;
	set <vector <int> > s;
	for(i=0;i<n-3;i++)
	{
		for(j=i+1;j<n-2;j++)
		{
			int l=j+1;
			int r=n-1;
			while(l<r)
			{
				if(v[l]+v[r]+v[i]+v[j]==x)
				{
					vector <int> temp;
					temp.push_back(v[i]);
					temp.push_back(v[j]);
					temp.push_back(v[l]);
					temp.push_back(v[r]);
					s.insert(temp);
					r--;
					l++;
				}
				else if(v[l]+v[r]+v[i]+v[j]>x)
				r--;
				else
				l++;
			}
		}
	}
	for(auto i:s)//won't have duplicates
	vv.push_back(i);
	for(i=0;i<vv.size();i++)
	{
		for(j=0;j<vv[i].size();j++)
		cout<<vv[i][j]<<" ";
		cout<<endl;
	}
	return 0;
}
