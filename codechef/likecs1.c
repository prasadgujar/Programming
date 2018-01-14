#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    std::cin>>t;
    while(t--)
    {
        string s;
        std::cin>>s;
        int asta=0;
        for(int i = 1;i<s.size();i++)
        {
            if(s[i]==s[i-1])
                asta=1;
        }
        if(asta)
            std::cout<<"yes\n";
        else
            std::cout<<"no\n";
    }
    return 0;
}
