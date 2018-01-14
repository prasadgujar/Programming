#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n ,  m, a , result = 0;
    std::cin>>n>>m>>a;
   result = ((m+a-1)/a)*((n+a-1)/a);
    std::cout<<result<<'\n';

    return  0;
}
