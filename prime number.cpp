//bujte hobe kalke dekhbo abar
#include <bits/stdc++.h>
using namespace std;

#include <ext/pb_ds/assoc_container.hpp>
#include <ext/pb_ds/tree_policy.hpp>
using namespace __gnu_pbds;

#define ordered_set tree<int, null_type,less<int>, rb_tree_tag,tree_order_statistics_node_update>

#define faster  ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

#define sq(x)   (x)*(x)
#define PI      acos(-1.0)
#define all(x) x.begin(),x.end()
#define nl      '\n'
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int  llu;

bool prime (int a)
{
    if(a<2)return false;
    if(a<=3)return true;
    if(a%2==0)return false;
    for(int i=3; i <=sqrt(a); i+=2)
    {
        if(a%i==0)return false;
    }
}
int main()
{
    int a;
    cin>>a;

    if(prime(a)==true)cout<<"Prime"<<endl;
    else cout<<"Not prime"<<endl;


}
