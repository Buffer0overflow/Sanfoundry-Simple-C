/*
This is a C program to convert binary number to decimal.
*/

#include <stdio.h>
int main()
{

int num , binaryVal , DecValue = 0 ,base = 1 , remainder ;

puts("Enter a binary number(1s and 0s) to convert to Dec:");
scanf(" %d",&num);
binaryVal = num;

while ( num > 0){

remainder = num % 10;
DecValue = DecValue + remainder * base ; 
num = num /10 ;
base = base * 2;
 

}
printf("You entered %d\n",binaryVal);
printf("Decimal value of binary is %d",DecValue);


 return 0;
};