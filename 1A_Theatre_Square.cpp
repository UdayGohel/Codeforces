#include<bits/stdc++.h>
using namespace std;
int main() 
{
    long long int  n, m, a;
    cin>>n>>m>>a;
    long long int x, y;
    x=n/a;
    y=m/a;
    if(n%a!=0)
    x++;
    if(m%a!=0)
    y++;
    cout<<x*y;
    return 0;
}
