
#include<bits/stdc++.h>
using namespace std;
#define sf scanf
#define pf printf
#define pb push_back
typedef long long ll;
const ll INF = 1e18;
const int MOD = 1e9+7;
const int N = 1e6+9;

#define fast()    ios_base::sync_with_stdio(false);cin.tie(NULL);cout.tie(NULL);
ll ar[100005],br[100005];

int main()
{
    fast();
    ll t, num, x, y, z, c0=0, c01=0, sum=0, ans=0, res=0, m0;

    sf("%lld",&t);

    while(t--)
    {
        cin >> x;
        bool AS=true;

        if(x>=6 && x<=15)
            pf("YES000\n");

        else
        {
            for(int i=3; i<=11 && AS==true; i++)
            {

                for(int j=6; j<=15 && AS==true; j++)
                {
                    m0=x-j;
                    if(m0%i==0)
                    {
                        AS=false;

                    }

                }
            }
            cout<< (AS? "YES":"NO") <<endl;
        }




    }
}

