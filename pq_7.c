#include <stdio.h>

main(){
	char numbers[50];
	scanf("%s",&numbers);
	int digits[50];	
	int i,j,index;
	for(i=0;i<50;i++){
		if(numbers[i]=='\0'){
			break;
		}
		digits[i]=numbers[i];
	}
	index=i-1;
	int repeat;
	for(i=0;i<index;i++){
		repeat=0;
		for(j=0;j<index;j++){
			if(digits[i]==digits[j]){
				repeat++;
			}
		}
		if(repeat>=2){
			printf("%d",i);
		}
	}
	printf("\n");
}
