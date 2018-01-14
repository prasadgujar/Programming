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


int main()
{
    int d1,m1,y1;
    int d2,m2,y2;

    std::cin>>d1>>m1>>y1;
    std::cin>>d2>>m2>>y2;

    if(y2>y1)
    {
        std::cout<<10000;
    }
    else if (m1>m2 && y1==y2)
    {
        std::cout<<((m1-m2)*500);
    }
    else if(d1>d2 && m1==m2 && y1==y2)
    {
        std::cout<<((d1-d2)*15);
    }
    else
        std::cout<<0;

    return 0;
}
