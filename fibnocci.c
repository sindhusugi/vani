#include<stdio.h>
int main()
{
	int n,a=0,b=1,c,i;
	printf("enter the number %d %d ",a,b);
	scanf("%d \t",&n);
	for(i=2;i<=n;i++)
	{
		c=a+b;
		printf("%d \t",c);
	a=b;
	b=c;
	}
	return 0;
}
