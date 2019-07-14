#include <stdio.h>

int main() {
	// your code goes here
	int n1,n[20],k,sum=0,i;
	scanf("%d\t",&n1);
	scanf("%d",&k);
	for(i=0;i<n1;i++)
	{
		n[i]=i+1;
	}
	for(i=0;i<k;i++)
	{
		sum=sum+n[i];
	}
	printf("%d",sum);
	return 0;
}
