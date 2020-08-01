#include <stdio.h>

int main()
{
	int m,n;
	scanf("%d %d",&m,&n);
	if(m%2==0 && n%2==0)
	{
		printf("%d\n",(m/2)*n);
	}
	else
	{
		printf("%d\n",(m*n)/2);
	}

	return 0;
}
