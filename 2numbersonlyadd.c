#include<stdio.h>
int main()
{
	
	int x,y,addition,sub,mul,divi;
		
	printf("enter first number : ");
	scanf("%d",&x);	
	

	printf("enter secound number : ");
	scanf("%d",&y);	

	addition = x+y; 
	sub = x-y;
	mul = x*y;
	divi = x/y;
	
	printf("Addition is %d\n",addition);
	printf("substraction is %d\n",sub);
	printf("multi is %d\n",mul);
	printf("divition is %d\n",divi);
	
	return 0;
}
