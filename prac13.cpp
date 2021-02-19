#include <stdio.h>
#include <conio.h>

//Kiem tra xem so nguyen duong N co gom toan chu so le hay khong

int main(){
	int N, div, check=0;
	do {
		printf("Nhap so nguyen duong N: ");
		scanf("%d", &N);
	}while(N<0);
	div = N;
	if(N%2 ==0) check = 0;
	else {
		do {
			div = div/10;
			if(div%2 == 1) check = 1;
			else check = 0;break;
		}while(div/10 !=0);
	}
	if(check == 1) printf("\nSo nguyen duong N la so toan le.");
	else printf("\nSo nguyen duong N khong la so toan le.");
	return 0;
}
