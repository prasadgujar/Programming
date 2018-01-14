#include <bits/stdc++.h>
using namespace std;


int main()
{
    int t;
    string s;
    std::cin>>t;
    getline(cin,s);
    while(t--)
    {
    getline(cin,s);
    char fc = s[0];
    int loc  = 0, end = s.size()-1;
    while(s[end] == ' ')
        end--;
    for(int i = 0; i <= end ; i++)
    {
        if(s[i] == ' ')
        {
            std::cout<<(char)toupper(fc)<<". ";
            fc = s[i+1];
            loc = i+1;
        }
    }
   if(loc < s.size())
   {
       std::cout<<(char)toupper(fc);
       for(int i = loc+1; i <= end; i++)
       {
           std::cout<<(char)tolower(s[i]);
       }
       std::cout<<'\n';
   }
}
   return 0;
}
