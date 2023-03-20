#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    if ((x % 4 == 0 && x % 100 != 0) || x % 400 == 0)
    {
        cout << "This year is leep year" << endl;
    }
    else
    {
        cout << "This year is not leep year" << endl;
    }
}