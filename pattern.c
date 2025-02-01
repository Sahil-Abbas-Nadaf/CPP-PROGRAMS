#include<stdio.h>


int main()
{
	int n,m,i,j;
	printf("Enter the no of rows and column: ");
	scanf("%d%d",&n,&m);
	
		printf("\n");
	for(i=1;j<=n;i++)
	{
		for(j=1;j<=m;j++)
		{
			printf("*");
		}
			printf("\n");	
	}
	
	return 0;
}
