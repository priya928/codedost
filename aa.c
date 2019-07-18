#include <stdio.h>

int main() {
	// your code goes here
	int i,d;
	scanf("%d",&d);
	for(i=1;i<=100;i++)
	{
		if(i%d==0)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
