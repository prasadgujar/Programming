#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,h;
    cin>>t;
    while(t--)
    {

     int n;
      long long int ans=0;
    int min_val=-1;
    int curr_max=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        //int h;
        scanf("%d",&h);
        if(min_val==-1 || h< min_val)
            min_val=h;
        if(h>curr_max)
            curr_max=h;
        else if(curr_max>h)
        {
            ans+=curr_max-h;
            curr_max=h;
        }
    }
    ans +=curr_max-min_val;
    printf("%lld\n",ans);
    }
   return 0;
}
