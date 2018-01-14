#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t;
    std::cin>>t;
    long long int n , sum , x, i;
    while(t--)
    {

        std::cin>>n;
        sum  = 0;
        for(i  =0; i < n; i++)
        {
            std::cin>>x;
            sum = sum|x;
        }
        std::cout<<sum<<'\n';
     }
    return 0;
}

