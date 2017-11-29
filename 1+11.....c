//Assignment no.6vi:1+11+111+1111+11111
#include <stdio.h>
void main()
{
	int i=1,n=1,sum=0,a=11;

	while(i<=5)
	{
		sum=sum+n;
		n=n*10+1;
		i+=1;
	}
	printf("the sum of the 1 ");
	i=1;
	for(i=1;i<=4;i++)
	{
		printf("+ %d  ",a);
		a=a*10+1;
	}
	printf("= %d",sum);
	
}
