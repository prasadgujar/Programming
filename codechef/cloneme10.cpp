#include<bits/stdc++.h>
using namespace std;
//int inp[10000],diff;
const int size=1e5+7;
const int mod=1e9+7;
int inp[size];
vector<int> one,two;
void solve()
{
    /*#include<bits/stdc++.h>
using namespace std;


int inp[10000];
int main()
{
    int t;
    cin>>t;
    while(t--)
    {*/
    int n,q,i,a,b,c,d,diff;
    //vector<int> one,two;
    cin>>n>>q;
    for(int i=1;i<=n;i++)
    //{
        cin>>inp[i];
    //}
    while(q--)
    {
    //int a[n];
    /*for(int i=0;i<n;i++)
    {
        cin>>inp[[i];
    }*/
    //int a,b,c,d;
    cin>>a>>b>>c>>d;
    one.clear();
    two.clear();
    /*if(a>=c)
    {
        swap(a,c);
        swap(b,d);
    }*/
    //int one[n];
    //int two[n];
    //vector<int> one,two;
    for( i=a;i<=b;i++)
        one.push_back(inp[i]);

    for( i=c;i<=d;i++)
        two.push_back(inp[i]);

    sort(one.begin(),one.end());
    sort(two.begin(),two.end());
    //int diff=0;
    for( i=0,diff=0;i<one.size();i++)

        if(one[i]!=two[i])diff++;
        //{
            //diff++;
            cout<<(diff<=1?"YES":"NO")<<endl;
        }

        //}

       /* if(diff > 1)
        {
            break;
        }
    }

    if(diff<=1)
    {
        puts("YES");
    }
    else
    {
        puts("NO");
    }

    //return 0;
*/

}
//int inp[10000];
int main()
{
    int t;
    cin>>t;
    while(t--)
        solve();

    return 0;

}
