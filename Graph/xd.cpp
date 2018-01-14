#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll N=100001;
ll m,k;
void findMissing(ll a[], ll b[], ll N, ll m)
{
	vector<int> coll;
	ll z=m+k+1;
    for (ll i=0; i<z; i++)
    {
        ll j;
        for (j=0; j<m; j++)
            if (a[i] == b[j])
                break;

        if (j == m)
            coll.push_back(a[i]);
            //cout << a[i] << " ";
            //c[i]=a[i];



    }
    cout<<coll[k]<<'\n';
}

void solve()
{
	ll a[N], i;
	for (i = 0; i <=N; i++)
                a[i] = i;
	//int n,k;
	cin>>m>>k;
	ll b[m];
	for( i=0;i<m;i++)
	cin>>b[i];

	findMissing(a,b,N,m);

}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	solve();
	return 0;
}
