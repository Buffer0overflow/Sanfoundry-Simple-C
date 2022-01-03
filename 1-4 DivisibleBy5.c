#include <stdio.h>
int main()
{

int i , num , numDivisible = 0 , numTotal = 0;

puts("Please enter a number");
scanf(" %d",&num);
puts("Numbers divisible by 5 are :");

for ( i=1 ; i <= num ; i++){

    if ( i % 5 == 0){
        printf("%3d,",i);
        numDivisible++;
        numTotal += i;
    }
}

printf("\nNumbers which are divisible by 5: %d\n",numDivisible);
printf("The total of divisble numbers are: %d",numTotal);


 return 0;
}