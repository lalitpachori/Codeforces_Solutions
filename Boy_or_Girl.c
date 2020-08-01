#include<stdio.h>
#include <string.h>

int main()
{
	//wjmzbmr
	int len,j=1,countdis=0;
	char str[100];
	scanf("%s",str);
	len=strlen(str);
	for (int i = 0; i < len; i++)
	{
		for (int k = i+1; k < len; k++)
		{
			if (str[i]==str[k])
			{
				str[i]='0';
			}
		}
		
	}

	for (int i = 0; i < len; i++)
	{
		if (str[i]!='0')
		{
			countdis++;
		}
	}
	if ((countdis%2)==0)
	{
		printf("%s\n","CHAT WITH HER!");
	}
	else
	{
		printf("%s\n","IGNORE HIM!");
	}
	return 0;
}
