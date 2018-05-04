#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n, x, ans;
	std::vector<int> v;
	cin>>n;
	int b=n;
	while (n--)
	{
		cin >> x;
		v.push_back(x);
	}
	std::sort(v.rbegin(), v.rend());
	//std::sort(v.begin(), v.end(), std::greater<int>());
	for (int i = 0; i < b; i++)
	{
		ans = sqrt(v[i]);
		if (ans * ans == v[i])
		{
			continue;
		}
		else
			{
				cout<<v[i]<<endl;
				return 0;
			}
		
	}
}
