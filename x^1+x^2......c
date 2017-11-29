	//assignment no.7 ii: x+x^2+^3+x^4+x^5
#include <stdio.h>
void main()
{
	int i,sum=0,n=1,a=1,x;
	printf("Enter the value of x");
	scanf("%d",&x);
	for(i=1;i<=5;i++)
	{
		n=n*x;
		sum=sum+n;
	}
	printf("the sum of %d ",x);
	a=x;
	while(i>2)
	{
		a=a*x;
		printf(" + %d ",a);
		i=i-1;
	}
	printf("= %d",sum);
}
