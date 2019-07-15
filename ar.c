#include <stdio.h>

int main() {
	// your code goes here
	int f,l,res,rem,cube,i,n;
	scanf("%d %d",&f,&l);
	for(i=f;i<l;i++)
	{
		n=f;
		res=0;
		while(n>0)
		{
		rem=i%10;
		cube=rem*rem*rem;
		res=res+cube;
		n=n/10;
	    }
		if(res==i)
		{
			printf("%d\t",i);
		}
	}
	return 0;
}
