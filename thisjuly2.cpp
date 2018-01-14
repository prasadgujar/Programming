#include<bits/stdc++.h>
using namespace std;
#define pb push_back
#define mp make_pair
#define pii pair<int,int>
#define vi vector<int>
#define vpii vector<pii>
#define fi first
#define se second
#define FOR(i,n) for(int (i)=0;(i)<(n);++(i))
#define FORI(i,n) for(int (i)=1;(i)<=(n);++(i))
#define IN(x,y) ((y).find(x)!=(y).end())
#define ALL(t) t.begin(),t.end()
#define TLIMIT 1000000
#define MAXLIMIT 100006
typedef unsigned long long ull;
typedef long double ldb;
typedef long long ll;
typedef long long int lli;
typedef stringstream SS;
typedef vector<string> VS;
typedef vector<ll> VI;
typedef vector<char> VC;
typedef map<string, string> MSS;
typedef map <ll,string> MIS;
typedef map <char,ll> MCI;
typedef map <string,ll> MSI;
typedef map <ll,ll> MII;
long long int t;
char s[MAXLIMIT];
char compare;
void work()
{
    std::cin>>s;

       char s1[MAXLIMIT]="";

       long long int i , j;

       for(i = 0, j = 0; s[i]!='\0';i++)
       {
           if(s[i]!='=')
           {
               s1[j]=s[i];
               j++;
           }
       }
       lli result=0, cn=0,length;
         length = j;
         if (length!=0)
         {
             i = 0;
             while(i<j)
             {
                 compare = s1[i];

                 i++;
                 cn = 1;

                 while(i<length&&s1[i]==compare)
                 {
                     cn++;
                     i++;
                 }
                 result = max(result,cn);
             }
         }
         std::cout<<result+1<<'\n';
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
   long long int t;
   std::cin>>t;
   assert(1 <= t && t <= TLIMIT);
   while(t--)
   {
    work();
   }
   return 0;
}
