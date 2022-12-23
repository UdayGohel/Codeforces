#include<stdio.h>
int main()
{
    int w, s, x;
	scanf("%d", &w);
    s = w/2;
    x = 2*s;
    if(s==1)
    	printf("NO");
    else if(x==w)
    	printf("YES");
    else
        printf("NO");
    return 0;
}
