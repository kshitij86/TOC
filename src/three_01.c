#include <stdio.h>
#include <string.h>

#define pf  printf
#define sf scanf

/*
 * Program that accepts strings with three consecutive zeroes or ones
 * */

int main(){
	
	// Using sliding window to check for pattern
	char st1[2000];
	bool flag = false;

	pf("Enter the string: ");
	sf("%s", st1);
	
	int lim = strlen(st1);
	
	for(int i = 0; i < lim - 3; i++){
		if((st1[i] == '1' && st1[i+1] == '1' && st1[i+2] == '1') || (st1[i] == '0' && st1[i+1] == '0' && st1[i+2] == '0' )){
			flag = true;
			break;
		}	
	}

	if(flag)
		pf("Condition satisfied \n");
	else pf("Condition not satisfied \n");
}
