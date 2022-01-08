/*C program to Convert Binary to Hexadecimal.*/

#include <stdio.h>
int main()
{
long int binVal , hexValue = 0 , i=1 , remainder; 

printf("Enter binary number to convert to hex:");
scanf(" %d",&binVal);

while ( binVal != 0)
{
    remainder = binVal % 10 ; 
    hexValue = hexValue + remainder * i;
    i = i * 2;
    binVal = binVal /10;
}
printf("You entered %d\n",binVal);
printf("Equivelent value in hex is %lx",hexValue);

 return 0;
};