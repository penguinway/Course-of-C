#include <stdio.h>
#include <stdlib.h>
int main()
{
    int input[4]={0};
    for (int i=0;i<4;i++)
        scanf("%d,",&input[i]);
    int temp1,temp2;
    if (input[0]>input[1])
        temp1 = input[1];
    else
        temp1 = input[0];
    if (input[2]>input[3])
        temp2 = input[2];
    else
        temp2 = input[3];
    printf("%d",temp1+temp2);
    return 0;

}