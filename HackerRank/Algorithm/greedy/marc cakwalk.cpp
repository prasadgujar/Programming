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

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */


    int n,j = 0,x;
    std::cin>>n;
    vector<int> v;
    for(int i = 0;i<n;i++)
    {
        std::cin>>x;
        v.push_back(x);
    }
    std::sort(v.begin(),v.end());
    //reverse(a,a+n);
    long long int result = 0;
    for(int i = n-1 ;i >-1; i--)
    {

        result += v[i]*pow(2,j);
        j++;
    }
    cout<<result;
    return 0;
}
