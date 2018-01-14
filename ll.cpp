#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i , ans = 0 , loc = 0;
    std:;cin>>n;
    std::vector<int> v(n);
    for(i = 0; i < n; i++)
    {
       std::cin>>v[i];
        if(v[i]!=0)
            loc++;
        else
            {
                ans = max(ans , loc);
                loc = 0;

            }
    }
       ans = max( ans, loc);
        std::cout << ans  << '\n';

}
