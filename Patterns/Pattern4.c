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
		for(k=i+1;k>0;k--)
			printf("%d", k);
		printf("\n");
	}
}
