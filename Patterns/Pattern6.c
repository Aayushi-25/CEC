#include<stdio.h>
int main()
{
	int n,i,j;
	scanf("%d",&n);
	printf("\n");
	for(i=0;i<n;i++)
	{
		for(j=0; j< n-i ;j++)
			printf("%d", n-j-i);
		printf("\n");
	}
}
