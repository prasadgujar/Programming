#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n,k;
	std::cin>>n>>k;
	int res;
	res = n % k;
	if(res%2==0)
	std::cout<<"YES";
	else
	std::cout<<"NO";
	return 0;
}
