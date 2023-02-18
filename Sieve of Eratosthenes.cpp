#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int ar[n];
    //all value zero kore dilam
    fill(ar,&ar[n],0);//memset(ar, 0, sizeof(ar));//two tai same two tai use kora jay

    for(int i=2; i*i<=n; i++)//outer loop
    {
        if(ar[i] == 0)
        {
            //inner loop
            for(int j=i*i; j<=n; j+=i)//main logic ai khane
            {
                ar[j]=1;
            }
        }
    }
    for(int i=2; i<=n; i++)
    {
        if(ar[i]==0)
        {
            cout<<i<<" ";
        }
    }
    cout<<endl;
}
