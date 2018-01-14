#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int n,x,total=0;
        std::cin>>n;
        for (int i=1;i<=n;i++)
        {
            std::cin>>x;
            total +=x/i;
        }
        if(total%2!=0)
            std::cout<<"ALICE"<<'\n';
        else
            std::cout<<"BOB"<<'\n';
    }
    return 0;
}
