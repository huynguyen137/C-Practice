#include <stdio.h>
#include <conio.h>

//Nhap so nguyen N, liet ke cac uoc cua N;

int main() {
	int N,i;
	printf("Nhap so nguyen N: ");
	do {
		scanf("%d", &N);
	}while(N<0);
	printf("\nCac uoc cua N la:");
	for(i=1; i<=N; i++) {
		if(N%i == 0) printf("%5d", i);
	}
	return 0;
}
