#include <stdio.h>
#include <conio.h>

//Tinh tich T = 1 x 2 x 3 x ... x n (Giai thua)

int main() {
	int n, i, S ;
	scanf("%d", &n);
	for(i=1; i<=n; i++) {
		S *= i;
	}
	printf("Ket qua : %d", S);
	return 0;
}
