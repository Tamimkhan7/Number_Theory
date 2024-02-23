#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;cin>>t;
    while(t--){
        int base, n;cin>>base>>n;
        int res =1;
        while(n != 0){
            if(n%2 != 0){
                res*=base;
                n-=1;
            }else{
                base*=base;
                n/=2;
            }
        }
            cout<<res<<endl;
    }


//tamim
}
