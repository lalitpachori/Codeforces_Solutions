#include <stdio.h>

int main()
{
	int n,m=0;
	int p1,p2,p3;

	scanf("%d",&n);
	for (int i = 0; i < n; i++)
	{
		int sum=0;
		scanf("%d %d %d",&p1,&p2,&p3);
		sum=p1+p2+p3;
		if(sum==2||sum==3)
		{
			m++;
		}
	}
	printf("%d\n",m);

	return 0;
}