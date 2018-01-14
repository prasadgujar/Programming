#include<bits/stdc++.h>
#include<assert.h>


#define FOR0(i,n) for(int i = 0;i<n;i++)
#define FOR1(i,n) for(int i = 1;i<=n;i++)
#define pf printf
#define sf scanf
using namespace std;


int arr[30];
void solve()
{
    int n, k;
    string s, t  = "";

    cin>>s;
    cin>>k;

    n =  s.size();

    assert(n > 0 &&  n <=  100000);
    assert(k > 0 && k <= 100000);

   FOR0(i, n) {
        assert(s[i] >= 'a' && s[i] <= ' z');
    }

    memset(arr,0,sizeof(arr));

    for(int i = 0; i < n; i++)
    {
        arr[s[i]-'a']++;
    }
    for(int i = 0 ; i <  n;  i++)
    {
        if(arr[s[i]-'a'] >= k)
            t +=s[i];
    }

    assert(t.size() >  0 );

    cout << t <<'\n';
}

int main()
{
ios_base::sync_with_stdio(false);
cin.tie(0);
 solve();
return 0;
}
