#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(0);
	int t;
	cin>>t;
	while(t--)
	{
	ll n,q;
	cin>>n;
	cin>>q;
	ll a[n];
	for ( ll i = 0; i <n; ++i)
		{
			cin>>a[i];
		}
	while(q--)
	{
		int ty;
		cin>>ty;
		if(ty==1)
		{
			ll l,r,max=INT_MIN,result=0;
			cin>>l>>r;
			for(ll i=l-1;i<r-1;++i)
			{

				result=(a[i]-a[l-1])*(a[r-1]-a[i]);
					if(result>max)
					{
						max=result;
					}

			}
			cout<<max<<'\n';

		}
		else
		{
			ll x,y;
			cin>>x;
			cin>>y;
			a[x-1]=y;


		}

	}
	}
	return 0;
}
