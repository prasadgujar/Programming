#include<bits/stdc++.h>
using namespace std;
#define ll long long int
vector<ll>  v;
int ispossiable(ll start,ll end,ll required)
{
	while(start<end)
	{
	if(v[start]+v[end]>required)
	{
		end--;
	}
	else if(v[start]+v[end]<required)
	{
		start++;
	}
	else if(v[start]+v[end]==required)
	{
		return 1;
	}
	}
	return 0;
}

int main()
{
	ll t;
	cin>>t;
	while(t--)
	{
	    ll n,x;
	cin>>n;
	for(ll i=0;i<n;i++)
	{
		cin>>v[i];
	}
	cin>>x;
	sort(v.begin(),v.end());
	ll start=0,end=n-1;
	ll ok=0;
    for(ll i=0;i<n;i++)
    {
    	ll now=v[i];
    	ll required = x-now;
    	if(ispossiable(i+1,n-1,required))
    	{
    		ok=1;
    		break;
    	}
    }
    if(ok)
    	cout<<"YES"<<'\n';
    else
    	cout<<"NO"<<'\n';
	}
	return 0;
}
