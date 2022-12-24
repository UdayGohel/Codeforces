#include<stdio.h>
#include<string.h>
int main()
{
    int n, c;
    scanf("%d", &n);
    char str[n][100];
    for(int i=0; i<n; i++)
    {
        scanf("%s", &str[i]);
        c = strlen(str[i]);
        if(10<c)
        printf("%c%d%c\n", str[i][0], c-2, str[i][c-1]);
        else
        printf("%s\n", str[i]);
    }
    return 0;
}
