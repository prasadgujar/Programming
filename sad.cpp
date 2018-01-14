#include <bits/stdc++.h>
using namespace std;
#define N 101

int G[N][N];

int main()
{
    int R,C,i,j,mi,mj;
    std::cin>>R>>C;
    for(i=1;i<=R;i++)
    {
        for(j=1;j<=C;j++)
        {
            std::cin>>G[i][j];
        }
    }
    bool sad;
    for(i=1;i<=R;i++)
    {
        for(j=1;j<=C;j++)
        {
        sad=true;
        for( mi=1;mi<=R;mi++)
        {
            if(G[mi][j]>G[i][j])
            {
                sad=false;
                break;
            }
        }
        if(!sad)
            continue;
        for(mj=1;mj<=C;mj++)
        {
            if(G[i][mj]<G[i][j])
            {
                sad=false;
                break;
            }
        }
        if(!sad)
            continue;
        std::cout<<G[i][j]<<'\n';
        return 0;
    }
    }
    std::cout<<"GUESS"<<'\n';
    return 0;
}
