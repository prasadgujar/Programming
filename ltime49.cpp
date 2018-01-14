#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	std::cin>>t;
	while(t--)
	{
		int a,b,n;
		std::cin>>a>>b>>n;
		int c,d;
		for(int i=1;i<=n;i++)
		{
			if(i%2==0)
			{
			d += b*2;
			}
			else
			{
			c += a*2;
			}

		}
		int m1= max(c,d);
		int m2=min(c,d);
		int result1 = floor(m1/m2);
		//int result2 = floor(result1);
		std::cout<< result1 << '\n';
	}
	return 0;
}
