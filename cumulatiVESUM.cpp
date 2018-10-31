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
    ll n,bd,h,w,p,bed;
    vector<ll>v;
    ll a[10000];
    ll b[10000];

    while(cin>>n>>bd>>h>>w)
    {
        ll pp=0;
        while(h--)
        {
           
            ll ans=0;
            vector<int>c;
            vector<int>d;
            cin>>p;
            for(ll i=0; i<w; i++)
            {
                cin>>bed;
                c[i]=bed;
            }
            sort(c.begin(),c.end());
            d[0]=0;
            for(ll i=1; i<w; i++)
            {
                d[i]=d[i-1]+c[i];
                if(d[i]>=n)
                {
                    v.pb(d[i]);
                }

            }
            sort(v.begin(),v.end());
            pp=(v[0]*p);
            if(pp<=bd&&ans)
            {
                ans=pp;
            }
            else
                ans=0;

        }


        if(pp<=bd)
            pf("%lld\n",pp);
        else
            pf("stay home\n");
        v.clear();
        c.clear();
        d.clear();
    }


}
}

