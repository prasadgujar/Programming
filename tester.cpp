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
    int a[6];
    int n1,tmp;
    std::cin>>n1;
    for(int j =n1+1;;j++)
    {
        int c = 0;
        int d = 0;
        tmp = j;
        for(int i = 0; i < 6; i++)
        {
            int rem = tmp%10;
            a[i] = rem;
            if(i >= 3)
                c  = a[i]+c;
            else
                d = a[i] +d;
            tmp = tmp/10;
        }
        if(c ==  d)
        {
            cout<<j;
            break;
        }
    }
}
