#include <bits/stdc++.h>
using namespace std;

long long int a;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    std::cin >> a;
    if(a % 6 == 0 || a % 6 == 1 || a % 6 == 3)
        std::cout << "yes" << '\n';
    else
        std::cout << "no" << '\n';
}
