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
    int t,n,a[n],m;
    std::cin>>t;
    while(t--)
    {
        std::cin>>n>>m;
        for(int i=0;i<n;i++)

            std::cin>>a[i];
        sort(a,a+n);
        reverse(a,a+n);
        if(a[0]>=m)
        //{
        std::cout<<a[0]<<'\n';
        //break;
    //}
        else
            std::cout<<"RESIGN"<<'\n';
    }

    return 0;

    }
