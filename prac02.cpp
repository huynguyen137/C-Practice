#include <stdio.h>
#include <conio.h>

//Tinh tong S = 1 + 2^2 + 3^2 + 4^2 + ... + n^2

int main() {
	int n,i,S=0;
	scanf("%d", &n);
	for(i=0; i<=n ; i++) {
		S+= i*i;
	}
	printf("Tong la : %d",S);
	return 0; 
}
	
