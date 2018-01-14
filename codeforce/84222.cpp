#include <iostream>
using namespace std;

int main() {
	// your code goes here
	long long int n,k,i,a[n];
    int j= 0;
	std::cin>>n>>k;
	long long int sum;
	for(i=0;i<n;i++)
	std::cin>>a[i];
	{sum +=a[i];
	 if (a[i]%2==1)
	   j  = 1;
	}
	if(sum%2==0 || j == 1)
	std::cout<<"First";
	else
	std::cout<<"Second";
	return 0;
}
