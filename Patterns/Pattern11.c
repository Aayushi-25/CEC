#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<i;j++)
			printf(" ");
		for(k=0; k< 2*n-2*i-1; k++)
			printf("*");
		printf("\n");
	}
}
