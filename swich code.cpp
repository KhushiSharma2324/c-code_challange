#include<stdio.h>
int main()
{
	int a,b,c;
	int ch;
	printf("enter two numbers");
	scanf("%d%d",&a,&b);
	
	printf("enter choice");
	scanf("%d",&ch);
	
	switch(ch)
	{
		case 1:c=a+b;
		   printf("%d",c);
		 break;
		 case 2:c=a-b;
		 printf("%d",c);
		 break;
		 case 3:c=a*b;
		   printf("%d",c);
		 break;
		 case 4:c=a/b;
		  printf("%d",c);
		 default: printf("invaild choice");
		
		
		
		
	}
	return 0;
	
	
}
