#include <bits/stdc++.h>
using namespace std;
int main()
{
	string ct;
	cout<<"Enter the column title:";
	cin>>ct;
	int len=ct.length();
	int val=0;
	int mul=1;
	while(len!=0)
	{
		val+=(int(ct[len-1])-64)*mul;
		mul=mul*26;
		len--;
	}
	cout<<val;
	return 0;
}
