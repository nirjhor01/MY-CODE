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
int main()
{
    ll node,edge,n1,n2;
    while(cin>>node)
    {

        if(node==0)
            break;
        cin>>edge;
        vector<int>adj[100000];
        int clr[10000];
        memset(clr,-1,sizeof(clr));
        for(ll i=0; i<edge; i++)
        {
            cin>>n1>>n2;
            adj[n1].pb(n2);
            adj[n2].pb(n1);

        }
        queue<int>nQ;
        nQ.push(0);
        clr[0]=0;
        int f=0;
        while(!nQ.empty())
        {
            ll p=nQ.front();
            nQ.pop();
            int vsize=adj[p].size();
            for(int i=0; i<vsize; i++)
            {

                if(clr[adj[p][i]]==-1)
                {
                    if(clr[p]==0)
                    {
                        clr[adj[p][i]]=1;
                    }
                    else
                    {
                        clr[adj[p][i]]=0;
                    }


                    nQ.push(adj[p][i]);
                }
                else
                {
                    if(clr[adj[p][i]]==clr[p])
                    {
                        f=1;
                        break;
                    }
                }
            }
            if(f==1)
                break;
        }
        if(f==1)
        pf("NOT BICOLORABLE.\n");
        else
        pf("BICOLORABLE.\n");
    }
}

