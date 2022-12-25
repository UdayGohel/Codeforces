#include <stdio.h>
int main() 
{
    int c=1; 
    char a[100];
    scanf("%s", &a);
    for(int i=0; a[i]!='\0'; i++)
    {
        if(a[i]==a[i+1])
        {
            c++;
            if(c==7)
            {
                printf("YES");
                break;
            }
        }
        else
        c=1;
    }
    if(c!=7)
    printf("NO");
    return 0;
}
