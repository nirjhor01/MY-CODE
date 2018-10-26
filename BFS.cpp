#include<bits/stdc++.h>
#include <sstream>
using namespace std;
#define ll long long
#define pi acos(-1.0)
#define mod  1000000007
#define N 1000000
#define pb push_back
#define mp make_pair
#define pf printf
#define sf scanf
#define mem memset(a,0,n)
#define fast() ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
#define mx 20000000
#define WHITE 1
#define GRAY 2
#define black 3
int adj[100][100];
int color[100];
int parent[100];
int dis[100];
int node,edge;

void bfs(int startingNode)
{

    for(ll i=0; i<node; i++)
    {

        color[i]=WHITE;
        dis[i]=INT_MIN;
        parent[i]=-1;

    }


    dis[startingNode]=0;
    parent[startingNode]=-1;
    queue<int>q;
    q.push(startingNode);



while(!q.empty())
{
    int x;
    x=q.front();
    q.pop();
    color[x]=GRAY;
    cout<<x<<" ";
    //some work
    for(ll i=0; i<node; ++i)
    {

        if(adj[x][i]==1)
        {
            if (color[i]==WHITE)
            {
                dis[i]=dis[x]+1;
                parent[i]=x;
                q.push(i);
            }
        }
    }
    color[x]=black;
}

}


int main()
{
    cin>>node>>edge;
    int n1,n2;
    for(ll i=0; i<edge; i++)
    {

        cin>>n1>>n2;
        adj[n1][n2]=1;
        adj[n2][n1]=1;


    }
    bfs(0);
}
