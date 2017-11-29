//Assignment no.6iii:1 11 111 1111 11111
#include <stdio.h>
void main()
{
	int i=1,n=1;
	printf("This is the loop you wanted:");
	while(i<=5)
	{
		printf("%d   ",n);
		n=n*10+1;
		i+=1;
	}
}
