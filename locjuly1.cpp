#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,n,m;
    std::cin>>t;
    while(t--)
    {
        std::cin>>n>>m;
        if(m>n)
            std::cout<<-1<<'\n';
        else
            std::cout<<n-1<<'\n';

    }
}
