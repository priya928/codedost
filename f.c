#include <stdio.h>

int main()
{
	// your code goes here
	int f=1,i,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		f=f*i;
	}
	printf("%d",f);
	return 0;
}
