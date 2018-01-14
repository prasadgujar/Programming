#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(0);
    int t;
    std::cin>>t;
    while(t--)
    {
        long long n,b,x;
        std::cin>>n>>b;
        x=n/(2*b);
        std::cout<<max(0ll,max(x*(n-b*x),(x+1ll)*(n-b*(x+1ll))))<<'\n';
    }
    return 0;
}
