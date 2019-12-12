#include <stdio.h>
main(){
	int i,j,k,space;
	scanf("%d",&i);
	if(i%2==0){
		j=2;
	}
	else{
		j=1;
	}
	for(j;j<=i;j+=2){
		space=(i-j)/2;
		for(k=0;k<space;k++){
			printf(" ");
		}
		for(k=0;k<j;k++){
			printf("*");
		}
		printf("\n");
	}
}
