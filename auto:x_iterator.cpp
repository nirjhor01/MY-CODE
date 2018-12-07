#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,r,a;
    map<int, int> mp;
    cin>>n;
    for(int i=1; i<=n; i++){
        cin>>r;
        while(r--){
            cin>>a;
            mp[a]++;
        }
    }
    for(auto x:mp)
        if(x.second == n)
            cout<<x.first<<" ";
    cout<<endl;
}
