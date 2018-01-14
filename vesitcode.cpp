#include<bits/stdc++.h>
using namespace std;

int main()
{
int k,n;
cin>>n>>k;
int ar[n];
for(int i=0;i<n;i++)
{
    cin>>ar[i];
}
std::sort(ar,ar+n);
std::cout<<ar[k-1]<<'\n';
return 0;
}
