#include<stdio.h>
int main()
{
	int n,a[10],i,j,flag=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		flag=1;
		else
		{
			for(j=3;j<a[i]/2;j++)
			{
				if(a[i]%j==0)
				{
					flag=1;
					break;
				}
				else
				flag=0;
			}
		}
		if(flag==0)
		printf("Prime\n");
		else
		printf("Not prime\n");
		flag=0;
	}
return 0;
}
