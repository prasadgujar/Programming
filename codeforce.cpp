#include <bits/stdc++.h>
using namespace std;

#define MAX_N 100

int main()
{
    int t,n,a[MAX_N],d[MAX_N];
    std::cin>>t;
    while(t--)
    {
        std::cin>>n;
        for(int i=0;i<n;i++)
            std::cin>>a[i];
        for(int i=0;i<n;i++)
            std::cin>>d[i];
        pair<int,int> event[2*MAX_N];
        for(int i=0;i<n;i++)
        {
            event[2*i]=make_pair(a[i],1);
            event[2*i+1]=make_pair(d[i],-1);
        }
        sort(event, event+2*n);
        int guests=0,answer=0;
        for(int i=0;i<2*n;i++)
        {
           guests +=event[i].second;
           answer =max(answer,guests);
        }
        std::cout<<answer<<'\n';
    }
    return 0;
}
