#include<stdio.h>
int main()
{
	int a,b=0,n 
	printf("enter the number");
	scanf("%d",&a);
	while(a!=0)
	{
		n=a%10;
		b=(b*10)+n;
		a=a/10;
	}
	printf("reverse of the number %d",b);
}
