#include <bits/stdc++.h>
using namespace std;

#define TLIMIT 100000
#define NLIMIT 100000
#define NDEBUG
#define FOR( i, a, b) for( int i = a; i < b; ++i)
#define REP (i , n) FOR( i, 0, n)

//int t;
int n;
int a[100005];
int main(){
ios_base::sync_with_stdio(false);
    cin.tie(0);
    //std::cin>>t;

    //assert(1 <= t && t <= TLIMIT);
    //while(t--)
        {
            int n , i , ans , last;
            std::cin >> n;
            //assert(0 <= n && n <= NLIMIT);
            //REP( i , n) std::cin >> a[i];
            last = 0;
            ans = 0;
            for( int i = 0; i < n; i++)
            {
                std::cin >>  a[i];
                if(a[i] == 0)
                {
                    ans = max( ans, i-last);
                    last = i+1;
                }
            }
            ans = max(ans, i-last);
            std::cout<<ans<<'\n';
        }
        return 0;
}
