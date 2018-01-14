#include <bits/stdc++.h>
using namespace std;

int main()
{
int n , x;
std:: cin >> n;
std::vector <int> v;
for (int i = 0; i < n; i++)
  {
      std:: cin >> x;
      v.push_back(x);
  }

for(int i = 1 ; i < n ; i++)
{
    int j = i-1;
    while(v[j] > v[j+1])
    {
        int temp = v[j+1];
        v[j+1] = v[j];
        v[j] = temp;
        j--;

    }
    for(int i = 0 ; i < n;  i++)
    {
        std::cout <<  v[i] << " ";
    }
    std::cout << "\n";
}
return 0;
}
