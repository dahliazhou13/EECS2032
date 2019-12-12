#include<stdio.h>

main(){
	float n;
	float k;
	scanf("%f %f", &n,&k);
	int i = 0;
	float r = n - k+1;
	float f1 = 1;	
	float f2 = 1;
	for(i=r; i <= n; i++){

		f1 = f1*i;
	}
	for(i = 1; i<= k; i++){
		f2 = f2*i;
	}
	float result = f1/f2;
	printf("%f\n", result);
}
