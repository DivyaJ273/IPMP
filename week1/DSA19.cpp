#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,val;
	cout<<"Enter the column title value:";
	cin>>n;
	val=n;
	string ct="";
	while(val>26)
	{
		if(val%26==0)
		ct=ct+'Z';
		else
		ct=char((val%26)+64)+ct;
		val=val/26;
	}
	ct=char((val)+64)+ct;
	cout<<ct;
	return 0;
}
	
