 /** https://www.codechef.com/problems/HEX **/
 /** Given Decimal number convert into hexadecimal number and then print output **/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    std::ios::sync_with_stdio(false);
    int t,n;
    std::cin>>t;
    while(t--)
    {
        std::cin>>n;
        std::cout<<std::hex<<n<<'\n';
    }
    return 0;
}

/* used in build STL function Hex **/

/** output
2
255
100

--

ff
64
**/
