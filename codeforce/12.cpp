#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,d;
    std::cin>>n>>b>>d;
    int checker = 0;
    int counter = 0;
    int x;
    for(;n>0;n--)
    {
        std::cin>>x;
        if(x>b)
        {
            continue;
        }
        checker +=x;
        if(checker > d)
        {
            ++counter;
            checker = 0;
        }
    }
    std::cout<<counter<<'\n';
    return 0;
}
