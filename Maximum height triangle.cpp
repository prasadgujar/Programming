/** https://www.codechef.com/submit/TRICOIN **/
/*
Maximum Height of Triangle = ∑1≤i≤Hi=H×(H+1)/2
*/
#include<bits/stdc++.h>
using namespace std;
int sum(int h)  // sum method
{
    return (h * ( h + 1) /2); // Maximum Height of Traingle  Calculation
}

void solve() // solve method
{
    int n;
    std::cin >> n;
     int h=1;
     while(sum(h) <= n) // call/Calculate value till less than n
     {
         h++; // increment h
     }
     std::cout << h-1 <<'\n'; // print the result
}

int main()
{
    int t;
    std::cin >> t;
    while(t--)
    {
        solve(); // call solve method
    }
}
