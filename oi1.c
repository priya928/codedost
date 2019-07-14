#include <stdio.h>

int main() {
	// your code goes here
	int p,n;
	scanf("%d %d",&p,&n);
	for(int i=0;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d ",i);
		}
	}
	return 0;
}
