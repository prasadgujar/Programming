//http://codeforces.com/problemset/problem/785/A


#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long int n,sum = 0;
    string str;
    std::cin>>n;
    for(int i = 0; i < n; i++)
    {
        cin>>str;
        if(str=="Tetrahedron")
            sum +=4;
        else if (str == "Cube")
            sum +=6;
            else if(str == "Octahedron")
                sum +=8;
        else if ( str == "Dodecahedron")
            sum +=12;
        else
            sum +=20;
    }
    std::cout<<sum;
    return 0;
}
