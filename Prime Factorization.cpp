#include <bits/stdc++.h>
using namespace std;
#define n1 '\n'
int main()
{
    int t;
    int n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        for (int i = 2; i <= sqrt(n); i++)
        {
            if (n % i == 0)
            {
                while (n % i == 0)
                {
                    n = n / i;
                    cout << i << " ";
                }
            }
        }
        if (n > 1)
            cout << n;
        cout << endl;
    }
}
