#include <stdio.h>
main(){
	int i,j,l,h;
	char c;
	scanf("%d %d %c",&l,&h,&c);
	for(i=0;i<l;i++){
		printf("%c",c);
	}
	printf("\n");
	for(j=1; j<h-1;j++){
		printf("%c",c);
		for(i=1; i<l-1;i++){
			printf(" ");
		}
		printf("%c",c);
		printf("\n");
	}
	for(i=0;i<l;i++){
		printf("%c",c);
	}
	printf("\n");

}
