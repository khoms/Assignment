//Assignment no.6v:1 2 4 7 11 16
#include <stdio.h>
void main()
{
	int i=1,n=10;
	printf("This is the loop you wanted:");
	while(i<=6)
	{
		printf("%d   ",n);
		n=n-3;
		i+=1;
	}
}
