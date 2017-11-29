//
#include <stdio.h>
int main ()
{

    int i = 1 , sum = 0 ;
    printf("   ");
    printf("n   sum from 1 to n\n ");

    printf("  \n");
    while (i<=10)
    {
        printf("   ");
       sum = sum + i ;

         printf("%d          %d \n",i , sum );
         i = i + 1;
    }

    return 0;
}
