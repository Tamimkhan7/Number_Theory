//bujte hobe pore
#include <bits/stdc++.h>
using namespace std;
#define n1     '\n'
int main()
{
    int t;
    int n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        //cout<<endl;
        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                int c=0;
                while(n%i==0)
                {
                    c++;
                    n=n/i;
                }
                cout<<i<<" ^ "<<c<<" , ";
            }
        }
        if(n>1)cout<<n<<" ^ "<<1<<endl;
        else cout<<endl;
    }

}
