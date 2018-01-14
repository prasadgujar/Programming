#include<bits/stdc++.h>
using namespace std;
void work()
{
     int n,m;
        std::cin>>n>>m;
        long long int suma,sumb,x,y;
        suma = 0;
        for(int i = 0; i < n; i++)
           {
           std::cin>>x;
            suma +=x;
           }
        sumb  = 0;
         for(int i = 0; i < m; i++)
           {
          std::cin>>y;
            sumb +=y;
           }
            if(suma >= sumb)
                std::cout<<"Snow"<<'\n';
            else
                std::cout<<"Death"<<'\n';
}
int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
       work();
    }
}
