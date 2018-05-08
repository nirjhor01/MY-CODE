#include<bits/stdc++.h>
using namespace std;
#define ll long long 
ll reverse(ll x)
{
	ll res = 0;
	while (x)
	{
		res = (res * 10) + (x % 10);
		x /= 10;

	}
	return res;

}
int main()
{
	ll T, n, res, sum = 0, ans = 0, x, k, c, k1, y;
	cin >> T;
	while (T--)
	{
		c = 0;
		cin >> n;
		k = reverse(n);
		y = n + k;
		while (1)
		{

			ans = y;
			c++;
			k1 = reverse(y);
			if (k1 == ans)
				break;
			else
				y = ans + k1;


		}
		cout <<c<<" "<< ans << endl;

	}

}
