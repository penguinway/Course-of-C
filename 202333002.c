#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[105],str2[105];
    gets(str1);
    gets(str2);
    //printf("%s",str1);
    int book = 1;
    for (int i=0;i<strlen(str1);i++)
    {
        if (str1[i] == str2[0])
        {
            for (int j=0;j<strlen(str2);j++)
            {
                if (str1[i+j] !=str2[j]) book = 0;
                if (j == strlen(str2) - 1) 
                    if (book == 1)
                    {
                        printf("%d",i+1);
                        return 0;
                    }
            }
        }
    }
    printf("-1");
    return 0;
}