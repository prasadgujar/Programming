#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int T, N, I;
    std::cin >> T;
    while(T--)
    {
        std::cin >>  N;
        string A="";
        while(N>0)
        {
            A = A + 'a';
            for( I = 1; N > 0 && I < 26; ++I)
            {
                A = A + char ('a' + I);
                N--;
            }
        }
        std::reverse(A.begin(),A.end());
        std::cout << A <<'\n';
    }
    return 0;
}
