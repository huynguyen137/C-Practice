#include <stdio.h>
#include <conio.h>

//Dem so chu so cua so nguyen n

int main() {
	int n, dem=0, chia;
	do {
		printf("Nhap so nguyen duong N: ");
		scanf("%d", &n);
	} while(n<0);
	chia = n;
	do{
		dem++;
		chia = chia/10;
	}while(chia != 0);
	printf("\nSo chu so cua N la: %d", dem);
	return 0;
}
