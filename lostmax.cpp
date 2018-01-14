#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,i;
    std::cin>>t;
    while(t--)
    {

        int a[1000];
        int b[1000];
        int counter;
        //for(int i =0; i <n; i++)
            std::cin>>a[i];
            counter++;
          int n = counter-1;
        for(int i = 0; i < counter;i++)\
        {
            if(n!=a[i])
                b[i]=a[i];
        }
         sort(b,b+n);
       std::cout<<b[0]<<'\n';
    }
    return 0;
}
