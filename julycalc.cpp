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
long long int t;
long long int N;
long long int B;
long long int Result;
long long int test;
int Divisible(long long int N,long long int B,long long int test)
{
    test = N >> 1;
    test = test - (test/B);
    return test;

}

int Accepted(long long int N,long long int test,long long int B)
{
   return Result = max(Result,(N-test)*(test/B));
}
void work()
{
    std::cin>>N>>B;
    //Divisible();
    assert(1 <= N && t <= NLIMIT);
    assert(1 <= B && t <= BLIMIT);
    test = N >> 1;
    test = test - (test%B);
    Result = 0;
    while(test <= (N >> 1))
    {
        //Accepted();
        Result = max(Result,(N-test)*(test/B));
        test +=B;
    }
    //Accepted();
    Result = max(Result,(N-test)*(test/B));
    std::cout<<Result<<'\n';
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   long long int t;
   std::cin>>t;
   assert(1 <= t && t <= TLIMIT);
   while(t--)
   {
    work();
   }
   return 0;
}
