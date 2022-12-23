#include <stdio.h>
#include<string.h>
int main() 
{
    int u=0, l=0;
    char str[100];
    scanf("%s", str);
    for(int i=0; str[i]!='\0'; i++)
    {
        if(str[i]>=65 && str[i]<=90)
        u++;
        else
        l++;
    }
    if(u>l)
    {
        for(int i=0; str[i]!='\0'; i++)
        {
            if(str[i]>=97 && str[i]<=122)
            printf("%c", str[i]-32);
            else
            printf("%c", str[i]);
        }
    }
    else if(u<l)
    {
        for(int i=0; str[i]!='\0'; i++)
        {
            if(str[i]>=65 && str[i]<=90)
            printf("%c", str[i]+32);
            else
            printf("%c", str[i]);
        }
    }
    else
    {
        for(int i=0; str[i]!='\0'; i++)
        {
            if(str[i]>=65 && str[i]<=90)
            printf("%c", str[i]+32);
            else
            printf("%c", str[i]);
        }
    }
    return 0;
}
