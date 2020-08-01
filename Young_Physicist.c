#include <stdio.h>

int main()
{

	int n;
	int sum=0,total;
	scanf("%d\n",&n);
	for (int i = 0; i < n; i++)
	{       int x,y,z;
		scanf("%d %d %d",&x,&y,&z);
		sum=sum+x+y+z;
	}
	if (sum==0)
	{
		printf("YES\n");
	}
	else
	{
		printf("NO\n");
	}
	
	return 0;
}

