#include <stdio.h>

int main()
{
	int k;
	int n,w;
	int sum=0,ans;
	scanf("%d %d %d",&k,&n,&w);
	for (int i = 1; i <= w; ++i)
	{
		sum=sum+(i*k);
		
	}
	ans=sum-n;
	if((ans)<=0)
	ans=0;
	
	printf("%d\n",ans);
	
	return 0;
}
