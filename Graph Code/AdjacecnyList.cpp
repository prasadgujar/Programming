
#include<bits/stdc++.h>
using namespace std;

vector <int> adj[10];
int main()
{
    clock_t t;
  t = clock();


   int x,y,nodes,edges;
   cin>>nodes;
   cin>>edges;
   for(int i=0;i<edges;++i)
   {
       cin>>x>>y;
       adj[x].push_back(y);
   }
   for(int i=1;i<=nodes;++i)
   {
       cout<<" Adjacency List of Node: "<< i << ": ";
       for(int j=0;j<adj[i].size();++j)
       {
           if(j==adj[i].size()-1)
             cout<< adj[i][j]<<'\n';
           else
             cout<< adj[i][j]<< " --> ";

       }
   }

  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
   return 0;
}
