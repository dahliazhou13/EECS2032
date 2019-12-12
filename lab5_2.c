#include <stdio.h>
main(){
	char numbers[50];
	int i;
	int size;
	char inverse[50];
	scanf("%s", numbers);
	for(i = 0; i<50; i++){
		if(numbers[i]=='\0'){
			break;
		}
	}
	size = i-1;
	int j;
	for(i = size; i>= -1; i--){
		inverse[j] = numbers[i];
		j++;
	}
	printf("%s\n", inverse);
}


