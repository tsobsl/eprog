#include <stdio.h>
int nmax=0;
int numbers[nmax-1];
int i=0;
int n=0;

int sort(int numbers[nmax-1],int i, int n){
	for (i=0; i<nmax-1; ++i){
		if (numbers[i]>0){
			for (n=0; n< nmax-1; ++n){
				if (numbers[n]%numbers[i] !=0){
					continue;
				}
				else {
					numbers[n]=0;
				}
			}
		}
	}
	return numbers[nmax-1];
}
		
main(){
	
	
	printf("nmax=");
	scanf("%d",&nmax);
	
	for (i = 0; i < nmax-1; ++i){
		numbers[i]= i+2;
	}
	
	sort(numbers[nmax-1],i,n);
	
	printf("Primzahlen:\n");
	for (i=0; i<nmax-1; ++i){
		if (numbers[i]>0){
			printf("%d\n",numbers[i]);
		}
	}
}