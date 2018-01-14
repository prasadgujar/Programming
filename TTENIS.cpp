#include <bits/stdc++.h>
using namespace std;

int main()
{
ios::sync_with_stdio(false);
cin.tie();
int t;
std::cin >>  t;
while(t--)
{
string s;
std::cin >> s;

std::cout << (s[s.length()-1] == '1' ? "WIN\n" : "LOSE\n");
}

}
