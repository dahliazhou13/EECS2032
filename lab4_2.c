#include <stdio.h>

main(){
	int n;
	scanf("%d",&n);
	int numbers[n];
	int times = 0;
	int integer;
	while(times<n){
		scanf("%d", &integer);
		numbers[times] = integer;
		times ++;
	}
	int i;
	int j;
	int boo = 0;
	for (i = 0; i < n; i++){
		for( j = i+1; j < n; j++){
			if(numbers[i] == numbers[j]){
				boo = 1;
			}
		}
	}
	if(boo == 1){
		printf("YES\n");
	}
	else{
		printf("NO\n");
	}
}

