#include<bits/stdc++.h>
#include <queue>
using namespace std;
#define sf scanf
#define pf printf
#define rt return
#define pb push_back
const int MOD = 1000000007;
const int MAX = 1000005;
const double PI = acos(-1.0);
typedef long long ll;
int main()
{
    priority_queue<int>p;
    int num,x,t;
    cin>>num;
    cin>>t;


    for(ll i=1; i<=num-1; i++)
    {
        cin>>x;
        p.push(x);
        //p.pop();
    }
    int dd=p.top(); p.pop();
    int ans=0;

    while (dd>=t)
    {
        dd--;
        t++;
        ans++;
        p.push(dd);
        dd=p.top();p.pop();
    }
    cout<<ans<<endl;
    rt 0;
}

//FIFO
