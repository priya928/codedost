#include <stdio.h>

int main() {
	// your code goes here
	int i,d,n;
	scanf("%d",&d);
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		if(i%d==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
