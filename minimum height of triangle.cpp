/** https://www.hackerrank.com/challenges/lowest-triangle/problem **/
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    int b,a;
    std::cin >> b >> a;

    if((2*a)%b==0)
    {
        std::cout << 2*a/b << '\n';
    }
    else
    {
        std::cout << 2*a/b + 1 << '\n';
    }

}
