/** https://www.codechef.com/problems/TICKETS5 **/
/*
Pseudo Code
 if(S[0]==S[1]) return false;
 for(i=0; i+2 < N; i++)
     if(S[i]!= S[i+2]) return false;
 return true;
 */
#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie();
int t;
std::cin>> t;
while(t--)
{
string s;
std::cin >> s;
int flag = 0;
for(int i=0; i < s.length()-2; ++i)
{
    if(s[i]!=s[i+2]) //checking for alternate character +1
    {
        flag=1;
        std::cout<< "NO" << '\n';
        break;
    }
}
if(flag==0)
{
    if(s[0]==s[1]) // check for base case
        std::cout<< "NO" << '\n';
    else
        std::cout<< "YES" << '\n';
}
}
}
/***
Example
Input:
2
ABABAB
ABC

Output:
YES
NO
***/
