#include <stdio.h>

int main(void) {
		int a;
	printf("\n Enter a number to check it is +ve or -ve or zero:");
	scanf("%d",&a);
	if(a==0)
	{
		printf("\n The give no is zero");
	}
	else
	if(a>0)
	{
		printf("\n The give no is positive");
	}
	else
	if(a<0)
	{
		printf("\n The given no is negative");
	}
	else 
	printf("\n Invalid input");
	return 0;
}
