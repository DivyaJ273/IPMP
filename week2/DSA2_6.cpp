#include <bits/stdc++.h>
using namespace std;
int main()
{
	int i,j,n,size,x;
	cout<<"Number of vectors:";
	cin>>n;
	cout<<"Size of each vector: ";
	cin>>size;
	vector <vector <int> > v;
	for(i=1;i<=n;i++)
	{
		cout<<"Enter elements: ";
		vector <int> temp;
		for(j=0;j<size;j++)
		{
			cin>>x;
			temp.push_back(x);
		}
		v.push_back(temp);
	}
	int row=0;
	int start=size-1;
	for(i=0;i<n;i++)
	{
		bool ok=false;
		for(j=start;j>=0;j--)
		{
			if(v[i][j]==1)
			ok=true;
			else
			break;
		}
		start=j;
		if(ok==true)
		row=i;
	}
	cout<<"Max no of 1s in row "<<row;
}
