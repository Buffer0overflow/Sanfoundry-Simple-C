#include <stdio.h>
int main()
{
long num , initialnum , remainder , sum=0 ;
    printf("Enter a number\n");
    scanf(" %ld",&num);
    initialnum = num ;

    while ( num > 0){

        remainder = num % 10 ;
        sum += remainder;
        num /= 10 ;
    }

    printf("Initial entered value is %ld\n",initialnum);
    printf("Sum of digits in initial num %ld is %ld",initialnum,sum);

 return 0;
};