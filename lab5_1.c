#include <stdio.h>
#include <stdlib.h>
main(){
	int count = 1;
	int max;
	char str[50];
	scanf("%s",str);
	int i;
	for(i=0; i<50 ; i++){
		if(str[i] == '1'||str[i] == '0'){
			if(str[i] =='1'){
				if (str[i+1] == '1'){
					count ++;
				}
				else{
					if(count >= max){
						max = count;
					}
					count = 1;
				}
			}
		}
		else if(str[i]=='\0'){
			break;
		}
		else{
			printf("Invalid String\n");
			exit(0);
		}
	}
	printf("%d\n",max);
}
