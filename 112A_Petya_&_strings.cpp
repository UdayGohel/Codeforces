#include<bits/stdc++.h>
using namespace std;
int main() 
{
    string a, b;
    cin>>a>>b;
    for(int i=0; i<a.length(); i++)
    {
        a[i]=tolower(a[i]);
    }
    for(int i=0; i<b.length(); i++)
    {
        b[i]=tolower(b[i]);
    }
    // cout<<a.compare(b);
    if(a.compare(b)>0)
    cout<<1;
    else if(a.compare(b)<0)
    cout<<-1;
    else
    cout<<0;
    return 0;
}
