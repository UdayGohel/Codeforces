#include <stdio.h>
int main() 
{
    int n, a=0, b=0, c=0;
    scanf("%d", &n);
    int x[n], y[n], z[n];
    for(int i=1; i<=n; i++)
    {
        scanf("%d %d %d", &x[i], &y[i], &z[i]);
    }
    for(int i=1; i<=n; i++)
    {
        a = a + x[i];
        b = b + y[i];
        c = c + z[i];
    }
    if(a==0 && b==0 && c==0)
    printf("YES");
    else
    printf("NO");
    return 0;
}
