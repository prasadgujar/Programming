#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int t,l,r;
    std::cin>>t;
    while(t--)
    {
        std::cin>>l>>r;
        if(l%2==0&&r%2==0)
            std::cout<<1;
        else
            std::cout<<l+r-1;


    }
    return 0;
}
