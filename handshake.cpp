#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>

using namespace std;


int main(){
    int T;
    cin >> T;
    for(int a0 = 0; a0 < T; a0++){
        int N;
        cin >> N;
        std::cout<< (N*(N-1))/2 <<'\n';
    }
    return 0;
}

/**
https://www.hackerrank.com/challenges/handshake/problem
**/


/**
Sample Input

2
1
2
Sample Output

0
1
Explanation

Case 1 : The lonely board member shakes no hands, hence 0.
Case 2 : There are 2 board members, 1 handshake takes place.
**/

/**
Try this reasoning:
I (PersonA) am one out of N people, so I need to shake hands with (N-1) people. This reasoning holds true for all of the N people, so the number of hand shakes is N * (N-1). Now that PersonA and PersonB shook hands, PersonB and PersonA (same people, but from PersonB's perspective) don't need to shake anymore. So we initially counted each combination twice. Therefore, the number of hand shakes is
nShakes = (N * (N-1)) / 2
**/
