#include <stdio.h>
#include <string.h>

int main(){
	char o = '(',  c = ')';
	char s1[10000];
	printf("Enter the string of brackets: ");
	scanf("%s", s1);
	int counter = 0, len = strlen(s1);

	for(int i = 0; i <= len; i++){
		if(s1[i] == o) counter++;
		if(s1[i] == c) counter--;
	}
	
	if(!counter){
		printf("Brackets balanced");
	} else {
		printf("Not balanced");
	}
}
