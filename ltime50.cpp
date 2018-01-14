#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
       long long int n,mx;
        std::cin>>n;
        int a[n];
        for (int i = 0; i < n; i++)
            std::cin>>a[i];
       sort(a,a+n);
       mx = a[0]+a[1];
       int rs =0, sum = 0;
       for(int i = 0; i < n; i++)
       {
           for(int j=i+1;j<n;j++)
           {
               sum = i | j;
               if(sum < mx)
                rs++;
           }
       }
       std::cout<<rs<<'\n';
    }
    return 0;
}
