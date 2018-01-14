#include  <bits/stdc++.h>
using namespace std;

int main()
{
    int s,n,m;
    std::cin>>s>>n>>m;
    int kb[n];
    int Solution = -1;
    int usb[m];
    for(int i=0; i< n;i++)
    {
        std::cin>> kb[i];
    }
    for(int i=0; i< m;i++)
    {
        std::cin>> usb[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(kb[i]+usb[j]<=s && kb[i]+usb[j]>Solution)
            {
                Solution = kb[i]+usb[j];
            }
        }

    }
     std::cout<<Solution;
    return 0;
}
