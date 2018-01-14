#include  <bits/stdc++.h>
using namespace std;

int a[100];
int d[100];

void solve()
{
    int n;
    std::cin>>n;
    for( int i=0;i<n;i++)
    std::cin>>a[i];
    for(int i=0;i<n;i++)
    std::cin>>d[i];
    int result=0;

    for(int t=0;t<=1000;t++)
    {
        int loc=0;
        for(int i=0;i<n;i++)
            loc +=a[i] <= t && t< d[i];
        result = max(result,loc);
    }
    std::cout<<result<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    std::cin>> t;
    while(t--)
    {
        solve();
    }
    return 0;
}
