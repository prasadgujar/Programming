#include<bits/stdc++.h>
using namespace std;

int main()
{
   long long  int n,a,b,c,x,sum = 0,i,d;
    std::cin>>n>>a>>b;
    c = a * 1 + b * 2;
    for( i = 0 ; i < n; i++)
    {
        std::cin>>x;
        sum +=x;
    }
    d = sum - c;
    if ( d >= 0)
       std::cout<<d;
    else
        std::cout<<0;
    return 0;
}
