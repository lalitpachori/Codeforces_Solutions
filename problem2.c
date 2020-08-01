#include <stdio.h>
#include <stdlib.h>

int main()
{
	long int m,n,a,value;
	scanf("%lld",&m);
	scanf("%lld",&n);
	scanf("%lld",&a);
	if(a==1)
	{
		printf("%lld\n",m*n);
	}
	else
	{
		value=((m+a-1)/a)*((n+a-1)/a);
		printf("%lld\n",value );
	}	
	
	return 0;
}