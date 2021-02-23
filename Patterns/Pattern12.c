#include<stdio.h>
int main()
{
	int n,i,j,k;
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-i-1;j++)
			printf(" ");
		for(k=0;k<2*i+1;k++)
			printf("%d", k+1);
		printf("\n");
	}
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<=i;j++)
			printf(" ");
		for(k=0;k<2*(n-1)-2*i-1;k++)
			printf("%d", k+1);
		printf("\n");
	}
}
