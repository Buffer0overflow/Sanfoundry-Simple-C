/*
 * C program to accept a decimal number and convert it to binary
 * and count the number of 1's in the binary number
 */

#include <stdio.h>
int main()
{
int num , DecValue , BinVal , no_of_1s=0 , remainder , base=1 ;

printf("Enter a Decimal number to convert to binary:\n");
scanf(" %d",&num);
DecValue = num;

while ( num > 0)
{
    remainder = num % 2;
    if ( remainder == 1)
    {
        no_of_1s++;
    }
    BinVal = BinVal + remainder * base ; 
    num = num /2 ;
    base *= 10;

}

printf("You entered %d\n",DecValue);
printf("its binary equivlent is %d",BinVal);

 return 0;
};