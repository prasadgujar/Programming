#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,a,b;
    long long int total;
    std::cin>>t;
    while(t--)
    {
        std::cin>>a>>b;
        total=0;
        while(a!=b)
        {
            if(a>b)
                a/=2;
            else
                b/=2;
            ++total;
        }
        std::cout<<total<<'\n';
    }
}
