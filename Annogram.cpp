#include<stdio.h>
#include<string.h>
int main()
{
	char a[50],temp;
	scanf("%s",a);
	int i,j,l;
	l=strlen(a)-1;
	j=l;
	for(i=0;i<l/2;i++)
	{
		temp=a[i];
		a[i]=a[j];
		a[j]=temp;
		j--;
	}
	printf("%s",a);
	return 0;
}
