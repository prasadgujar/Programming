#include <bits/stdc++.h>
//#include <boost/algorithm/string.hpp>
using namespace std;

int main() {
	// your code goes here
	int t;
	cin>>t;
	while(t--)
	{
    char s1[80];
	cin.getline(s1,80);
	int word = 0;
	for(int  i = 0; s1[i] != '\0'; i++)
	{
		if(s1[i] == ' ')
		{
			word++;
		}
	}

        if(word==0)	{
		boost::algorithm::to_lower(s1);
		s1[0] = toupper(s1[0]);
        std::cout<<s1<<'\n';
        }
	}
	return 0;
}
