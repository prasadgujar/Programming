#include  <bits/stdc++.h>
using namespace std;


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t , n , i;
    std::vector <int> v(n);
    std::cin >>  t;
    while(t--)
    {
        std::cin >> n;
        for (i = 0;  i < n; i++)
            std::cin >>  v[i];
        int res = v[0];
        for (i = 1; i < n; i++)
            res = __gcd(res, v[i]);
        std::cout << res << '\n';
    }
return 0;
}

