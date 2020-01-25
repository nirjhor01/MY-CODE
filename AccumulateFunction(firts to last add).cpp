
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
int ar[100005],br[100005];

int main()
{
    fast();
    ll t, num, x, y, z, c0=0, c1=0, sum=0, ans=0, res=0, m0,n, m;
    cin >> t;
    vector<ll>a;
    while(t--)
    {
        sum=0;
        cin>>n>>m;
        for(int i=0; i<=9; i++)
        {
            a.pb((m*i)%10);
        }
        for(int i=0; i<=(n/m)%10; i++)
        {
            sum+=a[i];
        }
         n=n/m;
        x= accumulate(a.begin(), a.end(), 0LL);
        cout <<sum+ (n/10)*x<<endl;

        a.clear();

    }
}
