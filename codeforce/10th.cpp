#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,m;
    std::cin>>n;
    std::cin>>m;
    long long int t;
    t = n/m;
    if(t%2==0)
        std::cout<<"NO";
    else
        std::cout<<"YES";
  return 0;
}
