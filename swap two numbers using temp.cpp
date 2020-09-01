#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the two numbers");
	scanf("%d%d",&a,&b);
	printf("\nbefore swapping");
	printf("%d  %d",a,b);
	c=a;
	a=b;
	b=c;
	printf("\nafter swapping");
	printf("%d   %d",a,b);
}
