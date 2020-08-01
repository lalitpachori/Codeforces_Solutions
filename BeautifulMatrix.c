#include <stdio.h>

int main()
{
	int array[6][6];
	int value;

	for (int i = 1; i < 6; i++)
	{
		for (int j = 1; j < 6; j++)
		{
			scanf("%d",&array[i][j]);
			
			if(array[i][j]==1)
			{
				if(i==3 && j==3)
				{
					value=0;
				}
				else if (i>3 && j>3)
				{
					value=(1-3)+(j-3);
				}
				else if (i>=3 && j<=3)
				{
					value=(i-3)+(3-j);
				}
				else
				{
					value=(3-i)+(j-3);
				}
			}
		}
	}
	printf("%d\n",value);



	return 0;
}