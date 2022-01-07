#include <stdio.h>
int main()
{
int num1,num2;

puts("Enter two integers to compare");
scanf(" %d %d",&num1,&num2);

if ( num1 ==num2)
    printf("Integers are equal");
    else
    printf("Integers are not equal");
 return 0;
}