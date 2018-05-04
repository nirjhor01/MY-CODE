#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,sum=0,k=0,c;
    cin>>a;
       bool prime[1000000+1];
    memset(prime, true, sizeof(prime));

    for (int p=2; p*p<=1000000; p++)
    {
        // If prime[p] is not changed, then it is a prime
        if (prime[p] == true)
        {
            // Update all multiples of p
            for (int i=p*2; i<=1000000; i += p)
                prime[i] = false;
        }
    }
    for(int i=2; i<=a; i++)
    {
        c=0;

        {

                for(int m=2; m<=i; m++)
                {
                    if(i%m==0 &&prime[m]==true )
                        c++;
                        //cout<<c<<endl;

                }


        if(c==2)
        k++;

    }
    }
    cout<<k<<endl;



}


