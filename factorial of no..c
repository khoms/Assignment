//Assignment No.4:To show the factorial of the given integer!!!
#include <stdio.h>
void main()
{
	int i,n,factorial;
	printf("Enter a number ofwhich you wanted to find the factorial");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		factorial*=i;
	}
	printf("the factorial of%d (%d!)=%d",n,n,factorial);
	return 0;
}
