#include <stdio.h>

int main()
{
	int n,m,j=0;
	int array[100];
	scanf("%d %d",&n,&m);
	for (int i = 0; i <n; i++)
	{
		scanf("%d",&array[i]);
	}
	for (int i = 0; i < n; ++i)
	{
		if (array[i]>0 && array[i]>=array[m-1])
		{
			j++;
		}
	}
	printf("%d\n",j);
	return 0;
}