#include<bits/stdc++.h>
using namespace std ;


int main()
{
    long long int n;
    string s;
    std::cin>>n;
    std::cin>>s;

    if(n%2==0)
        std::cout<<"undefined";
    else if (n==1)
        std::cout<<"cw";
    else
        std::cout<<"ccw";

}
