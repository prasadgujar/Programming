/* https://www.codechef.com/KJSC17/problems/MONDICT/ */
#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
std::cin>>t;
while(t--)
{
string s1;
int count=0;
std::cin>>s1;
while(true){
    if(next_permutation(s1.begin(),s1.end()))

        count++;
        else
            break;
}
std::cout<<count<<'\n';
}
return 0;

}
