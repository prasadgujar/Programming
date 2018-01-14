#include <bits/stdc++.h>
using namespace std;

int main()
{
int t;
set<int> s;
std::cin>>t;
for(int i=0;i<n;i++)
{
    int a,b;
    std::cin >> a >>b;
    swithc(a)
    {
    case 1:
        s.insert(b);
        break;
        case 2
        s.erase(b);
        break;
        case 3:
            std::cout << (s.find(b) == s.end() ? "No" : "Yes" ) << endl;
            break;
    }
}
return  0;
}
