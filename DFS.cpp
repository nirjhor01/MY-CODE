#include<bits/stdc++.h>
using namespace std;
#define WHITE 1
#define GRAY 2
#define BLACK 3
#define ll long long
int adj[100][100];
int color[100];
int node,edge;
void dfsvisit(int x)
{
    color[x]=GRAY;
    for(ll i=0; i<node; i++)
    {
        if(adj[x][i]==1)
        {
            if(color[i]==WHITE)
            {
                dfsvisit(i);
            }
        }
    }
}

void dfs()
{
    for(ll i=0; i<node; i++)
    {
        color[i]=WHITE;
    }
    for(ll i=0; i<node; i++)
    {
        if(color[i]==WHITE)
        {
            dfsvisit(i);
        }
    }
}

int main()
{
    cin>>node>>edge;
    int n1,n2;
    for(int i=0; i<edge; i++)
    {
        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;


    }
    dfs();



}

