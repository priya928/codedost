#include<stdio.h>
#include<string.h>
int main()
{
char ch;
scanf("%c",&ch);
if(((ch>='a')&&(ch<='z'))||((ch=='A')&&(ch=='Z')))
{
	if((ch=='a')||(ch=='e')||(ch=='i')||(ch=='o')||(ch=='u'))
	{
	printf("Vowel");
	}
	else
	{
	printf("Consonant");
	}
}
else
	printf("invalid");

return 0;
}

