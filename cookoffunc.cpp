#include<iostream>
#include<algorithm>
#include<math.h>
using namespace std;
int main()
{
	float a,b;
	cin>>a>>b;
	int i,j,c=0,k;
	for(i=1;i<=a;i++)
	{
		for(j=2*i+1;j<=b;j++)
		{
			if(j==2*i+1)
				k=j;
			k=k+2;
			c++;
			j=j+k-1;
		}
	}
	cout<<c;
	return 0;
}
