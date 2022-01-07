#include <stdio.h>
#define DAYSINWEEK 7
#define DAYSINYEAR 365

int main()
{
int numOfdays , years, weeks, days;

printf("Enter number of days to calculate\n");
scanf(" %d",&numOfdays);

years = numOfdays / DAYSINYEAR ; 
weeks = (numOfdays % DAYSINYEAR) / DAYSINWEEK ; 
days = numOfdays - (years *365 + weeks * 7); // Calculation is different than in SF solution :)

printf("Input value is %d\n",numOfdays);
/*
We will use ternary operator to control if years,weeks,days to be printed as plural or single without s.
*/
printf("There are %d year%s %d week%s & %d day%s in %d day%s",years,(years > 1) ? ("s,") : (","),weeks,(weeks > 1) ? ("s,") : (","),days,(days > 1) ? ("s") : (""),numOfdays ,(days > 1) ? ("s.") : (".") );

 return 0;
};