#include<bits/stdc++.h>
using namespace std;
int minn,idx,a;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        idx=-1;
        minn=1e9;
        for(int i=1;i<=n;i++)
        {
            cin>>a;
            if(a<minn)
            {
            minn=a[i];
            idx=i;
            }
        }
        cout<<idx<<'\n';
    }
}
