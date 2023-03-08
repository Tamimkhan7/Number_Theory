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

int main()
{
    set<int> s;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 1; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                int x = i;
                int y = n / i;
                s.insert(x);
                s.insert(y);
            }
        }
        cout << s.size() << endl;
        for (auto it : s)
            cout << it << " ";
        cout << endl;
    }
}