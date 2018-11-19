#include <stdio.h>

int k;
int i;
int f(i);

int fibonacci(int k){
	if (k == 0){
		return 0;
	}
	if (k == 1){
		return 1;
	}
	if (k > 1){
		for (i = 2; i <= k; ++i){
			f(i-1) + f(i-2) = f(i);
			return f(k);
		}
	}
	
}

main(){
	
	printf("k=");
	scanf("%ld",&k);
	
	printf("f(k)= %d",fibonacci(k));
}