#include <stdio.h>
/* Swap function to swap values N & M */

void swap( int *ptr1 , int *ptr2){

    int temp;

    temp = *ptr1; // store the first value in temp variable via its pointer
    *ptr1 = *ptr2 ;
    *ptr2 = temp; 

};
//void swap(int *ptr1, int *ptr2);

int main()
{
int n, m ; 

puts("Enter The first integer stored in n:");
scanf(" %d",&n);
puts("Enter The second integer stored in m:");
scanf(" %d",&m);

printf("Before swaping , N value is %d and M value is %d\n",n,m);

swap(&n,&m);

printf("After swaping , N value is %d and M value is %d\n",n,m);
 return 0;
};


