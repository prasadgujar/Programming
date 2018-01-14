#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        int x  = 1, y = 1;
        string s;
        std::cin>>s;
        char prev = '*';
        for(int i = 0;i < s.size(); i++)
        {
            if(s[i] == '=')
            continue;
            y = (s[i] == prev) ? (y+1) : 2;
            prev = s[i];
            x = max(x,y);

        }
        std::cout<<x<<'\n';
    }
}
