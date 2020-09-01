#include<stdio.h>
int main()
{
	int a,b=0,n,c=0; 
	printf("enter the number");
	scanf("%d",&a);
	while(a!=0)
	{
		n=a%10;
		c=c+n;
		a=a/10; 
		
	
	}
	printf("sum of integers  %d",c);
}
