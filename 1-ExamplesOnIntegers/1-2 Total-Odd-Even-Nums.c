#include <stdio.h>
int main()
{

int i, n , oddSum=0 , evenSum=0 ;

printf("Enter a number to calculate some of even and odd:\n");
scanf(" %d",&n);

for (i=1 ; i <= n ; i++){

    if ( i % 2 == 0){

        evenSum += i;
    }
    else {
        oddSum += i;
    }
};

printf("Sum of odd Numbers is %d\n",oddSum);
printf("Sum of even Numbers is %d",evenSum);



 return 0;
}