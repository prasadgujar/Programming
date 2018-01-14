#include<bits/stdc++.h>
using namespace std;

int main()
{
int t;
std::cin>>t;
while(t--)
{
string s1;
std::cin>>s1;
int n = s1.length();
int c=0 ;
for(int i = 0;i<n;i++)
{
     if(s1[i]=='<')
     {
         c++;
     }
     else if (s1[i]=='>'&&s1[i+1]=='<')
     {
         c--;
     }

        else if (s1[i] == '='&&s1[i]=='>'  )
        {
        c--;
        }

}

std::cout<<c+1<<'\n';
}
return 0;
}
