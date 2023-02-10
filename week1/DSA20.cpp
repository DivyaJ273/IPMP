#include <bits/stdc++.h>
using namespace std;
int main()
{
	int n,val,rem,rev=0;
	cout<<"Enter a number to check if it is a palindrome:";
	cin>>n;
	if(n<0)
	cout<<"Not a palindrome";
	else if(n==0)
	cout<<"A palindome";
	else
	{
		val=n;
		while(val>0)
		{
			rem=val%10;
			rev=rev*10+rem;
			val=val/10;
		}
		if(n==rev)
		cout<<"A palindrome";
		else
		cout<<"Not a palindrome";
	}
	return 0;
}
