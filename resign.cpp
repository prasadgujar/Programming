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
    int t,n,a[n],m,ac,z;
    std::cin>>t;
    while(t--)
    {
        std::cin>>n>>m;
        ac=0;
        for(int i=1;i<=n;i++)
        {

            std::cin>>z;
            if(ac<z)
                ac=z;
        }
        //sort(a,a+n);
        //reverse(a,a+n);
        if(ac>=m)
        //{
        std::cout<<ac<<'\n';
        //break;
    //}
        else
            std::cout<<"RESIGN"<<'\n';
    }

    return 0;

    }
