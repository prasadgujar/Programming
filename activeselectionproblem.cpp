#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int i, j, n;
        std::cin>>n;
        int a[n] , d[n], time[1000];
        for(i = 0; i<1000; i++)
            time[i]=0;
        for(i = 0; i < n ; i++)
            std::cin >> a[i];
        for(i = 0 ; i < n; i++)
            std::cin >> d[i];
        for(i =0; i < 1000; i++)
        {
            for( j = 0; j < n; j++)
                if(i>=a[j] && i<d[j])
                time[i]++;
        }
        sort(time, time+1000);
        std::cout<<time[999]<<'\n';
    }
}
