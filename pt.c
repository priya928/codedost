#include <stdio.h>

int main() {
	// your code goes here
	int f,l,i,num,ctr;
	scanf("%d %d",&f,&l);
	for(num = f;num<=l;num++)
       {
         ctr = 0;

         for(i=2;i<=num/2;i++)
            {
             if(num%i==0)
             {
                 ctr++;
                 break;
             }
        }
        
         if(ctr==0 && num!= 1)
             printf("%d ",num);
    }
printf("\t");
return 0;
}

