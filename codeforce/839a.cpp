#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,k,ans,sum,reg,x;
    std::cin>>n>>k;
    for(int i = 1; i <=n;i++)
    {
        std::cin>>x;
        sum +=x;
        k -=min(sum,8);
        sum -=min(sum,8);
        if(k<=0)
        {
            std::cout<<i;
            return  0;
        }
    }
        std::cout<<-1;
        return 0;



}
