/**
https://www.codechef.com/ALGO1601/problems/DIV
**/
/*
Given a natural number, calculate sum of all its proper divisors. A proper divisor of a natural number is the divisor that is strictly less than the number. For example, number 20 has 5 proper divisors: 1, 2, 4, 5, 10, and the divisor summation is: 1 + 2 + 4 + 5 + 10 = 22.
*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int  t;
    std::cin>>t;
    while(t--)
    {
        long long b ,total=0;
        //std::ios::sync_with_stdio(false);
        //std::cin.tie(0);
        total=0;
        std::cin>>b;
        for(int i=1;i<=b/2;i++)
{


        if(b%i==0)
        total +=i;

}
        std::cout<<total<<'\n';

    }
    return 0;

}
