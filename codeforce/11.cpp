#include<bits/stdc++.h>
using namespace std;

struct eater
{
    int ate;
    int wait;
    void init()
    {
        ate=wait=0;
    }
};

int main()
{

    eater alice , bob;
    bob.init();
    alice.init();
    int n;
    std::cin>>n;
    deque<int> chocs;
    for(int i =0;i < n; i++)
    {
        int t;
        std::cin>>t;
        chocs.push_back(t);
    }

    while(chocs.size()>0)
    {
        if(alice.wait!=0)
            alice.wait--;
        if(bob.wait!=0)
            bob.wait--;
        if(alice.wait==0)
        {
            alice.wait = chocs[0];
            alice.ate++;
            chocs.pop_front();
        }
        if(bob.wait==0)
        {
            if(chocs.size()==0)
                break;
            else
            {
                bob.wait = chocs[chocs.size()-1];
                bob.ate++;
                chocs.pop_back();
            }
        }
    }
    std::cout<<alice.ate<<" "<<bob.ate<<endl;
    /*if(alice.ate==bob.ate)
        std::cout<<"Tie"<<'\n';
    else if(alice.ate>bob.ate)
        std::cout<<"Motu"<<'\n';
    else
        std::cout<<"Patlu"<<'\n';
}*/
    return 0;
    }
