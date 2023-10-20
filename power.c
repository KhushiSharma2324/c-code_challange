#include<stdio.h>
#include<math.h>
int main()
{
double base,result, expo;
printf("enter a base number");
scanf("%lf",&base);
printf("enter an exponent");
scanf("%lf",&expo);

result = pow(base,expo);
printf("%1lf^%2lf=%2lf",base, expo, result);
return 0;
}
