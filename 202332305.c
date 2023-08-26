#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);

    int tens = num / 10;
    int ones = num % 10;
    switch (tens) {
        case 2:
            printf("twenty");
            break;
        case 3:
            printf("thirty");
            break;
        case 4:
            printf("forty");
            break;
        case 5:
            printf("fifty");
            break;
        case 6:
            printf("sixty");
            break;
        case 7:
            printf("seventy");
            break;
        case 8:
            printf("eighty");
            break;
        case 9:
            printf("ninety");
            break;
    }

    if (tens == 1) {
        switch (ones) {
            case 0:
                printf("ten");
                break;
            case 1:
                printf("eleven");
                break;
            case 2:
                printf("twelve");
                break;
            case 3:
                printf("thirteen");
                break;
            case 4:
                printf("fourteen");
                break;
            case 5:
                printf("fifteen");
                break;
            case 6:
                printf("sixteen");
                break;
            case 7:
                printf("seventeen");
                break;
            case 8:
                printf("eighteen");
                break;
            case 9:
                printf("nineteen");
                break;
        }
    } else {
        switch (ones) {
           default :
               if (ones !=0)
                   {printf("%s","-");}
               else
                   {printf("%s","");}
               }
           }
           switch (ones) {
               case 1:{
                   if(tens!=1)
                       {printf("%s","one");}
                   else
                       {printf("%s","");}
                   }
                   break;

               case 2:{
                   if(tens!=1)
                       {printf("%s","two");}
                   else
                       {printf("%s","");}
                   }
                   break;

               case 3:{
                   if(tens!=1)
                       {printf("%s","three");}
                   else
                       {printf("%s","");}
                   }
                   break;

               case 4:{
                   if(tens!=1)
                       {printf("%s","four");}
                   else
                       {printf("%s","");}
                   }
                   break;

               case 5:{
                   if(tens!=1)
                       {printf("%s","five");}
                   else
                       {printf("%s","");}
                   }
                   break;

               case 6:{
                   if(tens!=1)
                       {printf("%s","six");}
                   else
                       {printf("%s","");}
                   }
                   break;

               case 7:{
                    if(tens!=1)
                        {printf("%s","seven");}
                    else
                        {printf("%s","");}
                    }
                    break;

               case 8:{
                    if(tens!=1)
                        {printf("%s","eight");}
                    else
                        {printf("%s","");}

                    }
                    break;

               default :{
                    if(ones !=0 && tens !=0 )
                        {printf("%s\n", "nine");}

                    else
                        {}
                    }

           }

           return(0);
}