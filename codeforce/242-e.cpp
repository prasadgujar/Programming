#include<bits/stdc++.h>
using namespace std;

long q,n,m,ar[101000];
long s[101000];
long par[101000];
long clc,ps,a,b,tp,c;
long long r;
long temp , calc;

int main()
{
    ios_base::sync_with_stdio(0);
    cin>>n;
    for(int i = 1; i <= n; i++)
    {
        cin>>ar[i];
    }
    cin>>m;
    for(int i =  1; i <= m ; i++)
    {
        cin>>tp;
        if(tp==1)
        {
            cin>>a>>b;
            r=temp=calc=0;

            for(int  i = a;i<=b;i++)
            {
                temp+=ar[i];
                if(temp>2100000000)
                {
                    r+=temp;temp=0;
                }
            }
            r+=temp;
            cout<<r<<endl;
        }
        else
        {
            cin>>a>>b>>c;
            for(int j=a;j<=b;j++)
            {
                ar[j]^=c;
            }
        }
    }
cin.get();
cin.get();

return 0;
}
