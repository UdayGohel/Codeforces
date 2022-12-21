#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int c=1;
    string a, b;
    cin>>a>>b;
    for(int i=0,j=0; i<a.length(),j<b.length(); j++)
    {
        if(a[i]==b[j])
        {
            c++;
            i++;
        }
    }
    cout<<c;
    return 0;
}