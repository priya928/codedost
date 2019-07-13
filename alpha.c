#include <stdio.h>

int main(void) {
	// your code goes here
	char ch;
	scanf("%c",&ch);
	if(((ch=='a')&&(ch=='z'))||((ch=='A')&&(ch=='Z')))
	printf("Alphabet");
	else
	printf("No");
	return 0;
}
