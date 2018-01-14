#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int t,n;
    std::cin>>t;
    while(t--)
    {
        std::cin>>n;
        std::cout<<n+1<<'\n';
    }
    return 0;
}

/**
https://www.hackerrank.com/challenges/maximum-draws
*/


/*
Sample Input

2
1
2
Sample Output

2
3
Explanation
Case 1 : A pair of socks are present, hence exactly 2 draws for the socks to match.
Case 2 : 2 pair of socks are present in the drawer. The first and the second draw might result in 2 socks of different color. The 3rd sock picked will definitely match one of previously picked socks. Hence, 3.
*/

