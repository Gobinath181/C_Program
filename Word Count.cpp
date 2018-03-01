#include<stdio.h>
#include<string.h>
int main()
{
	char a[30];
	int i,j,n=0,len,count;
	scanf("%s",a);
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		count=0;
		for(j=0;j<len;j++)
		{
			if(a[i]==a[j])
			{
			count++;
			}
		}
	printf("%c = %d\n",a[i],count);
	}
	return 0;	
}
