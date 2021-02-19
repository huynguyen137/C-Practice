#include <stdio.h>
#include <conio.h>

//Tinh tong S = 1/2 + 3/4 + 5/6 + ... + 2n+1/2n+2

int main() {
	int n,i=0;
	float S= 0;
	scanf("%d", &n);
	for(i; i<=n; i++) {
		S += (2*float(i) + 1)/(2*float(i)+2);
	}
	printf("Tong la : %f", S);
	return 0;
}
