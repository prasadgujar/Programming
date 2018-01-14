#include<stdio.h>
#include<conio.h>
#include<alloc.h>

struct node
{
    char vertex;
    struct node *next;
};

struct node *gnode;
void displayGraph(struct node *adj[], int no_of_nodes);
void deleteGraph(struct node *adj[], int no_of_nodes);
void createGraph(struct node * adj[], int no_of_nodes);

int main()
{
    struct node *Adj[10];
    int i,no_of_nodes;
    clrscr();
    printf("\n enter the number of nodes:");
    scanf("%d",&no_of_nodes);
    for(int i=0;i<no_of_nodes;i++)
        Adj[i] = NULL;
    createGraph(Adj,no_of_nodes);
    printf("\n  The Graph is:");
    displayGraph();
    deleteGraph();
    getch();
    return 0;

}

void creareGraph(struct node *Adj[], int no_of_nodes)
{
    struct node *new_node , *last;
    int i,j,n,val;
    for(int i=0;i<no_of_nodes;i++)
    {
        last=NULL;

    }
}
