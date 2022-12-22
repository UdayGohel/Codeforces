#include<bits/stdc++.h>
using namespace std;
int main()
{
	int t, rem;
	cin>>t;
	int a[t];
	for(int i=0; i<t; i++)
	{
		cin>>a[i];
		if(a[i]>=1000)
		{
			rem = a[i]%10;
			cout<<rem*10<<endl;
		}
		else if(a[i]>=100 && a[i]<1000)
		{
			rem = a[i]%10-1;
			int c = rem*10 + 6;
			cout<<c<<endl;
//			break;
		}
		else if(a[i]>=10 && a[i]<100)
		{
			rem = a[i]%10-1;
			int c = rem*10 + 3;
			cout<<c<<endl;
//			break;
		}
		else
		{
			cout<<1<<endl;
//			break;
		}
	}
}
