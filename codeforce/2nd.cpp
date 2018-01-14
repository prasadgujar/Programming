//http://codeforces.com/contest/825/problem/A


#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    string str;
    std::cin>>n;
    std::cin>>str;
    int counter = 0;

    for(int i = 0; i < n; i++)
    {
        if(str[i]=='1')
           counter++;
        else
        {
            std::cout<<counter;
            counter = 0;
        }
    }
    std::cout<<counter<<'\n';
    return 0;
}
