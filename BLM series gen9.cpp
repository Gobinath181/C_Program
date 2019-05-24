#include<stdio.h>
int main()
{
	int n,i=0,j=-1,k,sum=0;
	scanf("%d",&n);
	for(k=0;k<n;k++)
	{
		i=i+1;
		j=j+2;
		sum=i*j;
		printf("%d ",sum);
	}
	return 0;
}
