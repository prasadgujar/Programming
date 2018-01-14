#include<bits/stdc++.h>
using namespace std;


bool A[10][10];

void initialize()
{
    for(int i=0;i<10;++i)
        for(int j=0;j<10;++j)
           A[i][j] = false;
}

int main()
{
 ios::sync_with_stdio(false);
 cin.tie(0);
 clock_t t;
  t = clock();
    int x,y,nodes,edges;
    initialize();
    cin>>nodes;
    cin>>edges;
    for(int i=0;i<edges;++i)
    {
        cin>>x>>y;
        A[x][y]=true;

    }

    if(A[3][4] == true)
        cout<< " There is an edge between 3 and 4"<<'\n';
    else
        cout<<" There is no Edge Between 3 and 4"<<'\n';
    if(A[2][3]==true)
        cout<<" There is an edge between 3 and 4"<<'\n';
    else
        cout<<"There is no Edge Between 3 and 4"<<'\n';

    t = clock() - t;
  printf ("It took me %d clicks (%f seconds).\n",t,((float)t)/CLOCKS_PER_SEC);
}
