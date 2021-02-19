#include <stdio.h>
#include <conio.h>

//Tinh tong S= 1/2*3 + 1/3*4 + 1/4*5 + ... + 1/n*(n+1) 

int main() {
	int n,i=1;
	float S=0;
	scanf("%d", &n);
	while(i<=n) {
		S += 1.0/(i*(i+1));
		i++;
	}
	printf("Tong la : %f", S);
	return 0;
}
