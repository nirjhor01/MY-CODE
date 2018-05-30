#include<bits/stdc++.h>
#include<map>
#include<set>
#include<vector>
#include<string>
#include<stack>
#include<iomanip>
#define ll long long 
#define db double
using namespace std;
ll Bigmod(ll a,ll b,ll c)
{
	if(b==0)
	{
		return 1;
	}
	if(b%2==0)
	{
		ll x=Bigmod(a,b/2,c);
		return (x*x)%c;
	}
	return (a%c*Bigmod(a,b-1,c))%c;
}


 main(){
    
    ll B,P,M;
    while(cin>>B>>P>>M)
        cout<<Bigmod(B,P,M)<<endl;

	return 0;
}
