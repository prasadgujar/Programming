#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;
	cin>>n;
	int a[n];
	for(int i=0;i<n;i++)
	cin>>a[i];
	for(int i=0;i<n;i++)
	{
		if(i==n-1)
		{
			cout<<a[i]<<' ';
		}
		else
		{
			cout<<a[i]+a[i+1]<<' ';
		}
	}
	return 0;
}
