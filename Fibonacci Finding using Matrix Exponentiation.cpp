// code a mistake and pore bujte hobe...........................................................................................................................................................
//..............................................................................................................................................................................................
#include <bits/stdc++.h>
using namespace std;
#define ordered_set tree<int, null_type, less<int>, rb_tree_tag, tree_order_statistics_node_update>
#define faster                    \
    ios_base::sync_with_stdio(0); \
    cin.tie(0);                   \
    cout.tie(0);
#define mod 1000000007
typedef long long int ll;
typedef unsigned long long int llu;

#define N 5
ll I[N][N], T[N][N];

void mul(ll A[][N], ll B[][N], ll dim)
{
    ll res[dim + 1][dim + 1];
    for (ll i = 0; i < dim; i++)
    {
        for (ll j = 0; j < dim; j++)
        {
            res[i][j] = 0;
            for (ll k = 0; k < dim; k++)
            {
                ll x = (A[i][k] * B[k][j]);
                res[i][j] = (res[i][j] + x);
            }
        }
    }
    for (ll i = 0; i < 2; i++)
    {
        for (ll j = 0; j < 2; j++)
            A[i][j] = res[i][j];
    }
}
void solve(ll a, ll b, ll n)
{
    I[0][0] = I[1][1] = 1;
    I[0][1] = I[1][0] = 0;

    T[0][0] = 0;
    T[0][1] = T[1][0] = T[1][1] = 1;
    n--;
    while (n)
    {
        if (n % 2 == 1)
        {
            mul(I, T, 2);
            n--;
        }
        else
        {
            mul(T, T, 2);
            n /= 2;
        }
    }

    ll ans = a * I[0][1] + b * I[1][1];
    cout << ans % mod << endl;
}
int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll a, b, n;
        cin >> a >> b >> n;
        solve(a, b, n);
    }
}