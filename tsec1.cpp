#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        long long int n;
        std::cin>>n;
        if(n%2==0)
            std::cout<<"Y"<<'\n';
        else
            std::cout<<"N"<<'\n';
    }
}
