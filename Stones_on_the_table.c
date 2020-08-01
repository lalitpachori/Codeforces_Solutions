#include <stdio.h>
#include <string.h>

int main()
{
	char str[50];
	int n,count1=0,count2=0,count3=0;
	scanf("%d\n",&n);
	scanf("%s",str);
	for (int i = 0; i < n; i++)
	{
		if (str[i]=='R')
		{
			while(str[i]==str[i+1])
			{
				count1++;
				i++;
			}
		}
		else if (str[i]=='G')
		{
			while(str[i]==str[i+1])
			{
				count2++;
				i++;
			}
		}
		else
		{
			while(str[i]==str[i+1])
			{
				count3++;
				i++;
			}
		}

		
	}
	printf("%d\n%d\n%d\n",count1,count2,count3);
	
	return 0;
}