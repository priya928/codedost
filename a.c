#include <stdio.h>

int main() {
	// your code goes here
	int a,res=0,rem=0,t,cube=0;
	scanf("%d",&a);
	t=a;
	while(a!=0)
	{
		rem=a%10;
		cube=rem*rem*rem;
		res=res+cube;
		a=a/10;
	}
	if(res==t)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}
	return 0;
}
