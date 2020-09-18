#include <stdio.h>
#include <string.h>

int main(){
	char s1[1000];
	printf("Enter string: ");
       	scanf("%s", s1);
	if(strlen(s1) < 3){
		printf("Does not end with 101\n");
	} else {
		char m[3];
		for(int i = strlen(s1); i < strlen(s1) - 3; i++){
			m[strlen(s1) - i] = s1[i];
		}
		if(strcmp(m, "101")){
			printf("Ends with 101\n");
		} else printf("Does not end with 101\n");

	}
	return 0;
}
