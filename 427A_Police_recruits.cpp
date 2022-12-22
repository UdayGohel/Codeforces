#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n, c=0, p=0;
    cin>>n;
    int a[n];
    for(int i=1; i<=n; i++)
    {
        cin>>a[i];
        if(a[i]>0)
        p=p+a[i];
        else
        {
            if(p<1)
            c++;
            else
            p--;
        }
    }
    cout<<c;
    return 0;
}
