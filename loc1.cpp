#include <bits/stdc++.h>
using namespace std;

#define TLIMIT 100005
#define MLIMIT 100005
#define NDEBUG
#define FOR( i, a, b) for( int i = a; i < b; ++i)
#define REP (i , N) FOR( i, 0, N)

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    long long int t,a,b,m;
    std::cin>>t;
    while(t--)
    {
        std::cin>>a>>b>>m;
         long long int x,y,z;
        x=floor(b/m);
        y=floor((a-1)/m);
        z=x-y;
        std::cout<<z<<'\n';
    }
    return 0;
}
