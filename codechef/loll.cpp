#include <bits/stdc++.h>
using namespace std;

void solve()
{
	string s;
	cin>>s;
	//scanf("%s",&s);
	int x,y;
	//cin>>x>>y;
	scanf("%d%d",&x,&y);
	int len;
	len = s.size();
	int c1,c2;
	c1=c2=0;
	for(int i=0;i<len;i++)
	{
		if(s[i]=='a')
		c1++;
		else if(s[i]=='b')
		c2++;

	}

	/*if((c1%2==0)&& (c2%2==0) && (len%2==0) || ((c1%2==0) && (c2%2==1)))
	{*/
		for(int i=1;i<=len;i++)
		{
			if(i%2==0)
			cout<<"b";
			else
			cout<<"a";
		}
cout<<std::endl;
	//}

}
int main() {
	// your code goes here
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	int t;
	scanf("%d",&t);
	while(t--)
	solve();
	return 0;
}
