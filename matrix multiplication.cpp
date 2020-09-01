#include<stdio.h>
int main()
{
	int a[100][100],b[100][100],c[100][100],i,j,k,p,q,m,n,mul=0;
	printf("enter the rows and columns");
	scanf("%d%d",&m,&n);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
		//printf("\n");
	}
	printf("enter the rows and columns");
	scanf("%d%d",&p,&q);
	for(i=0;i<p;i++)
	{
		for(j=0;j<q;j++)
		{
			scanf("%d",&b[i][j]);
		}
	//	printf("\n");
	}
	if(n==p)
	{
		for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			
			for(k=0;k<p;k++)
			{
				mul+=a[i][k]*b[k][j];
			}
			c[i][j]=mul;
			mul=0;
		}
	}
}
	printf("\nafter multiplication");
	for(i=0;i<m;i++)
	{
		for(j=0;j<q;j++)
		{
			printf("%d  ",c[i][j]);
		}
		printf("\n");
	}
	
}
