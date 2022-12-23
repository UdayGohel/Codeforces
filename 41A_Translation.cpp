#include <bits/stdc++.h>
using namespace std;
int main() 
{
    string a, b, c;
    cin>>a>>b;
    reverse(b.begin(), b.end());
    
    if(a.compare(b)==0)
    cout<<"YES";
    else
    cout<<"NO";
    return 0;
}
