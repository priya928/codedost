#include <stdio.h>

int main() {
	// your code goes here
	int n,r,s=0,p;
	scanf("%d",&n);
	p=n;
	while(n!=0)
	{
		r=n%10;
		s=s*10+r;
		n=n/10;
	}
	if(p==s)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
