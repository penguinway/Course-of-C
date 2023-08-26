#include <stdio.h>
#include <string.h>
int main()
{
    FILE *fp = NULL;
    char buff[2550];
    fp = fopen("in.txt","r");
    fgets(buff, 2550, (FILE*)fp);
    int i;
    int count=0;
    for (i=0;i<strlen(buff)-1;i++)
    {
        if (((buff[i]>=65&&buff[i]<=90)||(buff[i]>=97&&buff[i]<=122)) && (!((buff[i+1]>=65&&buff[i+1]<=90)||(buff[i+1]>=97&&buff[i+1]<=122))))
            count++;
    }
    printf("%d %d",count,strlen(buff));
    fclose(fp);
    return 0;
}