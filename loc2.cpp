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
    long long int t,n,s,i;
    //std::vector<long long int> v(n);
    std::cin>>t;
    while(t--)
    {
        std::cin>>n>>s;
        long long int v[n];
        for(i=0;i<n;i++)
            std::cin>>v[i];
        std::sort(v,v+n);
        int flag=0;
        long long int result=0;

        for(i=0;i<n;i++)
        {
            result = v[i]*n;
            if(result==s)
            {
                std::cout<<v[i]<<'\n';
                flag=1;
                break;
            }
            else
                i++;

        }
        if(flag==0)
            std::cout<<"-1"<<'\n';
    }
return  0;
}
