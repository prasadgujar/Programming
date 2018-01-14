#include<bits/stdc++.h>
using namespace std;


int main()
{
    int t,i,j,rs,ls;
    std::cin>>t;
    while(t--)
    {
        int n;
        int a[n];
        std::cin>>n;
        for( i =1;i<=n;i++)
            std::cin>>a[i];
        i = 0, j = 0;
        rs = 0, ls = 0;
        j = n-1;
        while(i<j)
        {
            if(ls < rs)
                ls += a[i++];
            else
                rs +=a[j--];

            if(ls = rs)
                std::cout<<i<<'\n';
            else
                std::cout<<-1<<'\n';


    }
return 0;
}
