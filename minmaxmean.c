#include <stdio.h>

int length = 0; 
int i = 0;
int max;
int min;
double mean;
int sum = 0;
int x;

void minmaxmean( double i, double length , double x[length]){
	for (i = 0; i < length - 1; ++i) {
		max = x[0];
		if (max < x[i+1]){
			max = x[i+1];
		}
	}
	for (i = 0; i < length - 1; ++i) {
		min = x[0];
		if (min > x[i+1]){
			min = x[i+1];
		}	
	}
	for (i = 0; i < length; ++i) {
		sum = sum + x[i];
	}
	mean = (double) sum / length;
}


int main(){

    printf("Länge des Arrays: ");
    scanf("%d", &length);

    double x[length];
    

    for(i = 0; i < length; ++i)  {
        printf("x array [%d] = ", i);
        scanf("%lf", &x[i]);
    }

    minmaxmean(x);
	printf("min= %d\n",min);
	printf("max= %d\n",max);
	printf("mean= %f\n",mean);
}