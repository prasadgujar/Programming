#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pii>
#define fi first
#define se second
#define FOR(i,n) for(int (i)=0;(i)<(n);++(i))
#define FORI(i,n) for(int (i)=1;(i)<=(n);++(i))
#define IN(x,y) ((y).find(x)!=(y).end())
#define ALL(t) t.begin(),t.end()
#define TLIMIT 1000000
#define MAXLIMIT 100006
#define NLIMIT 1000000000
#define BLIMIT 1000000000
typedef unsigned long long ull;
typedef long double ldb;
typedef long long ll;
typedef long long int lli;
typedef stringstream SS;
typedef vector<string> VS;
typedef vector<ll> VI;
typedef vector<char> VC;
typedef map<string, string> MSS;
typedef map <ll,string> MIS;
typedef map <char,ll> MCI;
typedef map <string,ll> MSI;
typedef map <ll,ll> MII;

int  main()
{
    int m =5;
    int used = 0;
    int local = 0;
    int n;
    std::cin>>n;
    for(int i = 0; i< n;i++)
    {
       local = m>>1;
       used = used +local;
       m =local*3;
          }
    std::cout<<used;
    return 0;
}
