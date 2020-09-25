#include <stdio.h>
#include <string.h>

int main(){
	int n;
	int arr[16] = {0};
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int i = 0;
	while(n > 0){
		arr[i] = n % 2;
		i++;
	       	n /= 2;
	}


	printf("Number in binary: ");
	for(int i = 15; i >= 0; i--){
		printf("%d", arr[i]);
	}
	printf("\n");
	if(n % 2 == 0)
		printf("Even number!");
	else printf("Odd number!");	
	printf("\n");
}

