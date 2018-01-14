#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
cin>>t;
while(t--)
{
    string s1;
    cin>>s1;
    cout<<( s1[s1.length()-1] == '1' ? "win\n" : "lose\n");
}
return 0;
}
