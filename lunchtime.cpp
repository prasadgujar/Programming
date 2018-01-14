#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,mx,n;
    std::cin>>t;
    vector<int> v;
    vector<int> v1;
    while(t--)
    {
        int x,cn = 0;
        cin>>x;
        v.push_back(x);
        cn++;
        n  = cn-1;
        for(int i=0; i <cn;i++)
        {
            if(n != v[i])
               v1.push_back(v[i]);
        }
        sort(v1.rbegin(),v1.rend());

       std::cout<<v1[0]<<'\n';
    }
    return 0;
}
