#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t,x;
    std::cin>>t;
    vector<int> v;
    vector<int> v1;
    int counter;
    while(t--)
    {
        counter = 0;
        std::cin>>x;
        counter++;
        if(x%2==0)
            v.push_back(x);
        else
            v1.push_back(x);
        if(counter%2==0)
        {
            sort(v.rbegin(),v.rend());
            std::cout<<v[0]<<'\n';
        }
        else
            {
            sort(v1.rbegin(),v1.rend());
            std::cout<<v[0]<<'\n';
            }
    }
    return 0;
}
