#include <stdio.h>
int main()
{
long num , initialnum , digit , sum=0 ;
    printf("Enter a number\n");
    scanf(" %ld",&num);
    initialnum = num ;

    while ( num > 0){

        digit = num % 10 ;
        sum += digit;
        num /= 10 ;
    }

    printf("Initial entered value is %ld\n",initialnum);
    printf("Sum of digits in initial num %ld is %ld",initialnum,sum);

 return 0;
};