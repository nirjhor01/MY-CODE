#include<bits/stdc++.h>
#include<iterator>
#include<set>
using namespace std;
int main()
{
int n,x;
set<int>myset;
//set<int>::reverse_iterator rit;
 std::set<int>::reverse_iterator rit;
cin>>n;
for(int i=0;i<n;i++)
{
  cin>>x;
  myset.insert(x);
} 
cout<<myset.size()<<endl;

 for ( rit=myset.rbegin(); rit!=myset.rend(); rit++)
 {
    std::cout<< *rit<<" ";

 }
 cout<<endl;
}
/* in set duplicate last element stay.Like..1 4 1 6 ans is 4 1 6*/
