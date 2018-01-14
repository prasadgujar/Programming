#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,x,y;
    std::cin>>t;
    while(t--)
    {
        int maxx=0;
        std::cin>>n>>y;
        for(int i=1;i<n;i++)
        {
            std::cin>>x;
            if(x<y)
                y=x;
            else if(x-y > maxx)
                maxx = x-y;
        }

        if(maxx == 0)
            std::cout<<"UNFIT"<<'\n';
        else
            std::cout<<maxx<<'\n';
    }
    return 0;
}
