#include<bits/stdc++.h>
using namespace std;


void path(int s,int v,int *pi)
{
    if(v==s)
        cout<<s<<" ";
    else if (pi[v]==0)
        cout<<"No Path"<<'\n';
    else
    {
        path(s,pi[v],pi);
        cout<<v<<" ";
    }

}

int bfs(int n,int s,queue<int> *v,int *pi,int *c)
{
    queue<int> q;

    int u,p;

    c[s]=1;

    q.push(s);

    while(q.size())
    {
      u=q.front();
      q.pop();

      while(v[u].size())
      {
          p=v[u].front();

          v[u].pop();

          if(c[p]==0)

          {
              c[p]=1;
              pi[p]=u;
              q.push(p);
          }
      }
    }

}
int main()
{
    int n,i,a,m,j,s;

    cout<<"Number Of Nodes: ";
    cin>>n;

    queue<int> v[n+1];

    int pi[n+1],c[n+1];

    for(i=1;i<=n;i++)
    {
      cout<<"Number Of Adjacent Nodes "<< i << " : ";
      cin>>m;
      c[i]=0;
      pi[i]=0;
      cout<<" The Nodes Are : ";
      for(j=0;j<m;j++)
      {
          cin>>a;
          v[i].push(a);
      }
    }

    cout<<"The Source Node: ";
    cin>>s;

    int t;

    cout<<" Destination Node: ";
    cin>>t;

    bfs(n,s,v,pi,c);

    path(s,t,pi);


    system("pause");

    return 0;
}
