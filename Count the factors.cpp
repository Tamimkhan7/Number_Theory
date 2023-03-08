#include <bits/stdc++.h>
using namespace std;
#define faster ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define pi acos(-1.0)
#define nl '\n'
///Library
#define mem(a,b) memset(a,b,sizeof(a))
#define all(a) a.begin(),a.end()
#define Sort(x) sort(x.begin(),x.end())
#define Reverse(x) reverse(x.begin(),x.end())
#define SortA(ar,s) sort(ar,ar+s)
#define SortD(ar,s) sort(ar,ar+s,greater<int>())
#define gcd(a,b) __gcd(a,b)
#define lcm(a,b) (a*(b/gcd(a,b)))
#define sq(x) (x)*(x)
#define min3(a,b,c) min(a,min(b,c))
#define min4(a,b,c,d) min(a,min(b,min(c,d)))
#define max3(a,b,c) max(a,max(b,c))
#define max4(a,b,c,d) max(a,max(b,max(c,d)))
#define ABS(x) ((x)<0?-(x):(x))
#define pb push_back
#define mod 1000000007
#define end printf("\n")
#define yes printf("YES\n")
#define no printf("NO\n")
int main()
{
    int n;
    while(cin>>n)
    {
        cout<<n<<" : ";
        if(n==0)
        {
            break;
        }
        int c=0;

        for(int i=2; i*i<=n; i++)
        {
            if(n%i==0)
            {
                c++;
                while(n%i==0)
                {
                    n /=i;
                }
            }
        }
        if(n>1)
            c++;
        cout<<c<<endl;
    }

}
