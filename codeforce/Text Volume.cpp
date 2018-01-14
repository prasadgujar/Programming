#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
	//ios_base::sync_with_stdio(false);
	//cin.tie(0);
	int n,i ,up = 0, ans = 0;
	cin>>n;
	cin.ignore();
	string s;
	getline(cin,s);
	for(int i = 0; i < n; ++i)
	{
	if(s[i] == ' ')
	{
		ans =  max(ans,up);
		up = 0;
	}
	if(s[i] >= 'A' && s[i] <= 'Z')
		up++;
	}
	ans = max(ans,up);
	cout<<ans<<'\n';
	return 0;
}
