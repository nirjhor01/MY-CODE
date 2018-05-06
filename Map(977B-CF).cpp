#include<bits/stdc++.h>
using namespace std;
int main()
{
	string s, x,ans1;
	int ans = 0, n;
	map<string, int>mp;
	cin >> n >> s;
	for (int i = 0; i < n; i++)
	{
		x = s.substr(i, 2);
		mp[x]++;
		if (mp[x]>ans)
		{
			ans = mp[x];
			ans1 = x;
		}
	}
	cout << ans1 <<endl;

}
