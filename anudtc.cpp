
#include <bits/stdc++.h>
using namespace std;

#define TLIMIT 1000
#define PM 26

int main(){
ios_base::sync_with_stdio(false);
    cin.tie(0);
    int t;
    std::cin>>t;
    //assert(1 <= t && t <= TLIMIT);
    while(t--)
        {
            int n;
            std::cin >> n;
            //int check = ( n *( n + 1 )/2 <= 360);
            printf("%c %c %c \n",((360 % n == 0 ) )? 'y' : 'n' , ( n <= 360 ) ? 'y' : 'n' ,  ( n *( n + 1 )/2 <= 360) ? 'y' : 'n');

        }
return 0;
}
