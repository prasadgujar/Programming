#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n , m;
    std::cin>>n;
    std::cin>>m;
    int a[n];
    for(int i=0;i<n;i++)
    {
        std::cin>>a[i];
    }
    //int counterA=0;
    //int counterB=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]==a[i+1])
        {
            std::cout<<"-1"<<'\n';
        }
        else if( a[i] == m && a[i+1] == m)
        {
            std::cout<<"-1"<<'\n';

        }
        else if( a[i]== m && a[i+1] != m)
        {
            std::cout<<a[i+1]<<'\n';
        }
        else
        {
            std::cout<<a[i]<<'\n';
        }

    }

}
