#include <bits/stdc++.h>
using namespace std;
int answer(vector <int> v);
int main()
{
	int i,n,x;
	vector <int> v;
	cout<<"Enter the number of elements in your array:";
	cin>>n;
	for(i=0;i<n;i++)
	{
		cin>>x;
		v.push_back(x);
	}
	answer(v);
	return 0;
}

int answer(vector<int> v)
{
	int i;
	int min=v[0];
	int max=99;
	int prev_min=min;
	for(i=1;i<v.size();i++)
	{
		if (v[i]<min)
		{
			min=v[i];
			continue;
		}
		else if(v[i]<max)
		{
			max=v[i];
			prev_min=min;
		}
		else if(v[i]>max)
		{
			cout<<prev_min<<" "<<max<<" "<<v[i]<<endl;
			return 0;
		}
	}
	cout<<"None";
	return 0;
}
