#include <stdio.h>
#include <string.h>


void clean(int *a){
	for(int i = 0; i < 26; i++)
		*(a+i) = 0;

}


bool check_all_zero(int *a){
	for(int  i = 0; i < 26; i++)
		if(*(a+i) != 0)
			return false;
	return true;
}

int main(){
	int a1[26];
	char st1[2000], st2[2000];
	

	printf("Enter the  first string: ");
	scanf("%s", st1);
	
	printf("Enter the  second string: ");
	scanf("%s", st2);
	
	// Initialize with zero
	clean(a1);

	for(int i = 0; i < 26; i++)
		a1[st1[i] - 'a']++;

	for(int i = 0; i < 26; i++)
		a1[st2[i] - 'a']--;

	if(check_all_zero(a1))
		printf("Given strings are anagrams!\n");
	else printf("Not anagrams! \n");

}
