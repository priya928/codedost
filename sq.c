#include <stdio.h>

int main() {
	// your code goes here
	int b,e,i;
	long long p=1;
	scanf("%d %d",&b,&e);
	for(i=1;i<=e;i++)
	{
		p=p*b;
	}
	printf("%lld",p);
	return 0;
  }
