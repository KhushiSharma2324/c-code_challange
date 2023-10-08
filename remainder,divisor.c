#include<stdio.h>
int main()
{
int divident, diviser, remainder , quotient;

printf("Enter divident");

scanf("%d",&divident);

printf("Enter diviser");

scanf("%d",&diviser);

quotient = divident / diviser;

remainder = divident % diviser;


printf("quotient=%d\n",quotient);

printf("remainder=%d",remainder);

return 0;

	
}
