#include <stdio.h>
#include <string.h>


int main() {
	char st1[20000];
	printf("Enter the string to count tokens in (omit spaces): ");
	scanf("%s", st1);
	printf("Number of tokens in string: %d \n", strlen(st1));
}
