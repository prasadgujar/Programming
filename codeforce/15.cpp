#include<bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,k,x;
    std::cin>>n>>k;
    vector <int> v;
    for(int  i =0; i <n ;i++)
        std::cin>>x;
    v.push_back(x);

    if(n%2==0&k==1)
        std::cout<<n/2;
    else if (n%2==1&&k%2==0)
        std::cout<<n-k;
    else
        std::cout<<(n-k)+1;
}
