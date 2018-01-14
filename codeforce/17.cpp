#include<bits/stdc++.h>
using namespace std;

int main()
{
   int n,a,b,c,d;
   long long int  resa , resb ;
   std::cin>>n>>a>>b>>c>>d;
   resa = 0;

    resa =n*a;
    resb = 0;

    resb = n*b;
   if(a>n || b > n)
    std::cout<<"Friendship";
   else if (resb>resa)
    std::cout<<"First";
   else
    std::cout<<"Second";

return 0;
}
