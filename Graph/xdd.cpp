#include <bits/stdc++.h>
using namespace std;
#define ll long long int
ll N=100;
int m,k;

void findMissing(int a[], int b[], int l, int m)
{
	vector<int> coll;
	int z=m+k+1;
    for (int i=0; i<z; i++)
    {
        int j;
        for (j=0; j<m; j++)
            if (a[i] == b[j])
                break;

        if (j == m)
            coll.push_back(a[i]);
            //cout << a[i] << " ";
            //c[i]=a[i];



    }
   printf("%d\n",coll[k]);
  //coll.clear();
   //printf("\n");
}

void solve()
{
	ll a[N], i;
	for (i = 0; i <=N; i++)
                a[i] = i;
	//int n,k;
	//cin>>m>>k;
	scanf("%d%d",&m,&k);
	int b[m];
	for( i=0;i<m;i++)
	scanf("%d",&b[i]);

	//sort(b,b+m);

	//findMissing(a,b,l,m);

	vector<int> coll;
	int z=m+k+1;
    for (int i=0; i<z; i++)
    {
        int j;
        for (j=0; j<m; j++)
            if (a[i] == b[j])
                break;

        if (j == m)
            coll.push_back(a[i]);
            //cout << a[i] << " ";
            //c[i]=a[i];



    }
   printf("%d\n",coll[k]);

}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);

	int t;
	scanf("%d",&t);
	while(t--)
	solve();
	return 0;
}
