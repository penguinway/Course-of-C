#include <stdio.h>
#include <string.h>
int main()
{
    char a[260],b[260];
    int book = 1;
    gets(a);
    gets(b);
    for (int i=0;i<strlen(a);i++)
    {
        for (int j=0;j<strlen(b);j++)
        {
            if (a[i] == b[j]) book = 0;
        }
        if (book) printf("%c",a[i]);
        book = 1;
    }
    return 0;
}