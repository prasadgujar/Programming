#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int n,q;
    cin>>n>>q;
    while(q--)
    {
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int a,b,c,d;
    cin>>a>>b>>c>>d;
    if(a>=c)
    {
        swap(a,c);
        swap(b,d);
    }
    //int one[n];
    //int two[n];
    vector<int> one,two;
    for(int i=a;i<b;i++)
    {
      one.push_back(a[i]);
    }

    for(int i=a;i<b;i++)
    {
      two.push_back(a[i]);
    }
    sort(one.begin(),one.end());
    sort(two.begin(),two.end());
    int diff=0;
    for(int i=0;i<one.size();i++)
    {
        if(one[i]!=two[i])
        {
            diff +=1;
        }

        if(diff > 1)
        {
            break;
        }
    }

    if(diff<=1)
    {
        puts("YES");
    }
    else
    {
        puts("NO");
    }
    }
    }
    return 0;
}
