//assignment No.1:TO print the 10th triangle number using loops!!!
#include <stdio.h>
void main()
{
	int i,triangleNumber=0;
	while(i<=10)
	{
		triangleNumber+=i;
		i=i+1;
	}
	printf("the required 10th triannge number is %d",triangleNumber);
}
