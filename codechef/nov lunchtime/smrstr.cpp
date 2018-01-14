#include <iostream>
#include <vector>
using namespace std;
#define ll long long int

int main() {
	// your code goes here
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	int t;
	cin>>t;
	while(t--)
	{

		ll n,q,i,x,y;
		cin>>n>>q;
		vector<ll> v;
		for(i=0;i<n;i++)
		{
			cin>>x;
			if(x!=1)
			{
				v.push_back(x);
			}

		}
		while(q--)
		{
			cin>>y;
			for(i=0;(i<v.size())&&y;i++)
			{
				y /=v[i];
			}
			cout<<y<<' ';
		}

		cout<<'\n';
	}
	return 0;
}
