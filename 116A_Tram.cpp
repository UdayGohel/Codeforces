#include <bits/stdc++.h>
using namespace std;
int main() 
{
    int n, c, d, max=0;
    cin>>n;
    int a[n], b[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i]>>b[i];
    }
    for(int i=2; i<=n; i++)
    {
        c = a[i] + b[i];
        d = c-a[i+1]+b[i+1];
        if(d>max)
        max = d;
    }
    cout<<max;
    return 0;
}
