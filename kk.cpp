#include <bits/stdc++.h>
using namespace std;

//#define TLIMIT 1000
//#define NLIMIT 1000
//#define NDEBUG
#define FOR(i,a,b) for(int i=a;i<b;++i)
#define REP(i, n) FOR(i,0,n)

int t=0;
int n;
int a[100005];
int main(){
//ios_base::sync_with_stdio(false);
    //cin.tie(0);
    int t;
    scanf("%d",&t);

    //assert(1 <= t && t <= TLIMIT);
    while(t--)
        {
            int n;
            scanf("%d",&n);
            //std::cin >> n;
            //assert(1 <= n && n <= NLIMIT);
            REP( i , n) scanf("%d",&a[i]);
            long long ans = 0;
            std::stable_sort( a , a+n);
            std::reverse( a, a+n);
            REP( i, n)
            if(i%2==0)
                ans += a[i];
            std::cout << ans << '\n';


        }
        return 0;
}
