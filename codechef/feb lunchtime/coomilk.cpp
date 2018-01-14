#include <bits/stdc++.h>
using namespace std;
int solve()
{
	int n;
	cin>>n;
	vector<string> s;
	for(int i=0;i<n;i++)
	{
		cin>>s[i];
	}
	if(s[2]=="cookie")
	{
		cout<<"NO"<<'\n';
	}
	else
	{
		cout<<"YES"<<'\n';
	}
}
int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
		solve();
	}
	return 0;
}
