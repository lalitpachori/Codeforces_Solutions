#include <stdio.h>

int main(int argc, char const *argv[])
{
	int number;
	scanf("%d",&number)
	for (int i = 0; i < number; ++i)
	{
		if (number%i==0)
		{
			printf("YES\n");
		}
		else
		{
			printf("NO\n");
		}
	}
	return 0;
}