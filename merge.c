#include <stdio.h>

int merge (int m, int n, int vec1[m], int vec2[n], int i) {
	int s = m + n;
	int vec3[s];
	int x = 0;
	int y = 0;
	
	for (i = 0; i < s; ++i) {
		if (x < m && y < n){
			if (vec1[x] < vec2[y]){
				vec3[i] = vec1[x];
				++x;
			}
			else {
				vec3[i] = vec2[y];
				++y;
			}
		}
		if (x = m){
			vec3[i] = vec2[y];
			++y;
		}
		if (y = n) {
			vec3[i] = vec1[x];
			++x;
		}
	return vec3[s];
	}
}





int main(){
	int m, n, s, vec1[m], vec2[n], vec3[s], i;
	
	printf("Länge des ersten Vektors=");
	scanf("%d",&m);
	printf("Länge des zweiten Vektors=");
	scanf("%d",&n);
	
	printf("Bitte geben Sie die Werte des ersten Vektors SORTIERT ein:");
	for (i = 0; i < m; ++i) {
		printf("vec1[i]=");
		scanf("%d", &vec1[i]);
	}
	
	printf("Bitte geben Sie die Werte des zweiten Vektors SORTIERT ein:");
	for (i = 0; i < n; ++i) {
		printf("vec2[i]=");
		scanf("%d", &vec2[i]);
	}
	
	merge(m, n, vec1[m], vec2[n], i);
	
	for (i = 0; i < s; ++i) {
		printf("Zusammenschluss[%d]=%d\n", i, vec3[s]);
	}
}