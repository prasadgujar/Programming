#include <bits/stdc++.h>
using namespace std;

#define TLIMIT 1000
#define NLIMIT 1000

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    std::cin>>t;
    assert(1 <= t && t <= TLIMIT);
    while(t--)
        {
            int n , m;
            std::cin >> n >> m;
            assert( 1 <= n && n <= NLIMIT);
            assert( 1 <= m && m <= NLIMIT);
            std::cout<<(n+m-1)<<'\n';

        }

}
