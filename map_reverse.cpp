#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()

{
	int  n,x,a[10000],cnt=0;
	std::vector<int> vt;
	map<int,int>mpp;
	std::vector<int> v;
	freopen("C:\\Users\\Monir\\Documents\\My Codes\\input.txt","r",stdin);
		freopen("C:\\Users\\Monir\\Documents\\My Codes\\output.txt","w",stdout);
	cin>>n;
	for(int i=n-1;i>=0;i--)
	{
		cin>>a[i];
		mpp[a[i]]++;
	}
	cout
	for(int i=0;i<n;i++)
	{
	
		if(mpp[a[i]]!=0)
		{
			v.push_back(a[i]);
			cnt++;
			mpp[a[i]]=0;
		}
		
	}
	cout<<cnt<<endl;
	for(int i=v.size()-1;i>=0;i--)
	{
		cout<<v[i]<<" ";
	}
	cout<<endl;
	

}
/*if input is 1 5 5 1 6 1 and you put in your map from the begin then the answer is 1 5 6 but if u put
in map from the end then the answer will be 1 6 5 */
