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
    int t;
    cin >> t;
    while(t--)
    {
        char s[505];
        sf("%s",&s);
        set<char>ASs;
        for (int i = 0; i < strlen(s); i++)
        {
            if(s[i] != s[i+1]) ASs.insert(s[i]);
            else i++;
        }

        for(auto i : ASs)
        {
            cout<<i;
        }
        pf("\n");

    }
}
