#include <stdio.h>
#include <string.h>
main(){
	char str[1000];
	int key;
	int i,j,k;
	fgets(str,1000,stdin);
	scanf("%d",&key);
	char out[strlen(str)/key][key];
	int length = strlen(str);
	for(i=0;i<strlen(str)/key;i++){
		for(j=0;j<key;j++){
			out[i][j]=str[i*key+j];
		}
	}
	k=0;
	int row = sizeof(out)/key;
	for(i=0;i<key;i++){
		for(j=0; j<row;j++){
			printf("%c",out[j][i]);
			k++;
			if(k==key){
				printf("\n");
				k=0;
			}
		}
		
	}
}
