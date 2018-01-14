#include <bits/stdc++.h>
using namespace std;

#define NLIMIT 1000
#define KLIMIT 1000
#define NDEBUG
#define FOR( i, a, b) for( int i = a; i < b; ++i)
#define REP (i , N) FOR( i, 0, N)
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int N, i, j ,k;
    char s[505] [505], x[505];
    std::cin >> k >> N;
    for ( i = 0 ; i <  k; i++)
    {
     std::cin >> s[i];
    }
    for( i = 1; i <= N; i++)
    {
        std::cin >> x;
        if(strlen(x) >= 47)
            std::cout << "Good" <<'\n';
        else
        {
             for(j=0; j<k&&!strstr(x,s[j]); j++);
              puts(j<k?"Good":"Bad");
        }
    }
    return 0;
}
