#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	ll n,x;
	ll one=0;
	ll two=0;
	cin>>n;


	for(ll i=0;i<n;i++)
	{
		cin>>x;
		if(x==1)
		{
			one++;
		}
		else
		{
			two++;
		}

	}
	if(one==0)
	{
		cout<<0;
	}
	else if(one==3&&two==0)
	{
		cout<<1;
	}
	else if(one<3&&two==0)
	{
		cout<<1;
	}
	else
	{
		cout<<two;
	}
	return 0;
}
