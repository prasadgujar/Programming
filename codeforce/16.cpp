#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n ,v1,v2,t1,t2;
    std::cin>>n>>v1>>v2>>t1>>t2;

    if(t1==t2 && v1==v2)
        std::cout<<"First";
    else if (v1>=v2&&t1>=t2)
          std::cout<<"Second";
   else if (v1==v2&&t1>=t2)
    std::cout<<"Second";
   else if (v2>=v1&&t2>=t1)
    std::cout<<"First";
   else
    std::cout<<"Friendship";
}
