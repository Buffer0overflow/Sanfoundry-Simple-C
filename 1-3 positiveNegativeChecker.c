#include <stdio.h>
int main()
{

int d ;

printf("Please type an integer to check positve/negative: \n");
scanf(" %d",&d);

if ( d < 0){
    printf(" %d is negative \n",d);
}
else {
    printf("%d is Positive",d);
};
};
