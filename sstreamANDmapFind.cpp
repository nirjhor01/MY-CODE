#include<bits/stdc++.h>
using namespace std;
int main()
{
    map<string, string>mp;
    string s1,s2,s,a;
    while(1)
    {
        getline(cin,s);
        if(s=="")
            break;

        stringstream ssm(s);
        ssm>>s1>>s2;
        mp[s2]=s1;

    }
    while(cin>>a)
    {
        if(mp.find(a)!=mp.end())
            cout<<mp[a]<<endl;
        else
            printf("eh\n");
    }
}
