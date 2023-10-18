#include<stdio.h>
int main()
{
char c;
printf("enter u to display the uppercase alphabets");
printf("enter l to display the lowercase aplhabets");
scanf("%c",&c);
if("if c=='U ||C=='u'")	{
	for (c ='A';c<='Z';++c)
	printf("%c",c);
}else if(c=='L'|| c=='l'){
	for(c ='a';c<='z';++c)
	printf("%c",c);
}else{
	printf("error! you entered an invailed character");

}
	
return 0;	
}
