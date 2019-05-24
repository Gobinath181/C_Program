#include<stdio.h>
int main()
{
	int a[8],i,c=0,j,b[2],k=0,m,f=0;
	for(i=0;i<8;i++)
	scanf("%d",&a[i]);
	for(i=0;i<8;i++)
	{
		m=a[i];
		for(j=0;j<8;j++)
		{
			if(m==a[j])
			{
				c++;
				f=1;
			}
			else if(c==1)
			f=0;
		}
		if(f==0)
		{
			b[k]=m;
			k++;
		}
		f=0;
		c=0;
	}
	printf("%d %d",b[0],b[1]);
	return 0;
}
