#include <bits/stdc++.h
using namespace std;

int main()
{
    int n ;
    std::cin >> n;
    vector <int> v;
    int x;
    for (int i = 0; i <  n; i++)
    {
        std::cin >> x;
        v.push_back(x);
    }
    int count = 0;

    for (int i = 0 ; i <  n-1 ; i++)
        for (int j = i+1  ; j < n ;  j++ )
        if ( v[i]  > v[j])
        count++;

    std::cout << count <<'\n';
 }
