#include <bits/stdc++.h>
using namespace std;

int prime(int n)
{
int i;
for(i =  2; i <= sqrt (n) ;  ++i)
{
if(n%i==0)
    return 0;
else
    continue;
}
return 1;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    std::cin>>t;
    while(t--)
    {
        int x , y, total, i = 1, value;
        std::cin >> x >> y;
        while(i)

        {
            total=  x + y + i;
            value = prime (total);
            if(value == 1)
            {
                std::cout << i << '\n';
                break;
            }
            else
                ++i;
        }
    }
    return 0;
}
