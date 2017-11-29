//Assignment no.2:To print the nth tringle number using loops!!!
#include <stdio.h>
void main()
{
	int i,n,triangleNumber=0;
	printf("enter the position of the number to print that positions triangle number");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		triangleNumber+=i;
	}
	printf("THE required %d th term is =%d",n,triangleNumber);
}
