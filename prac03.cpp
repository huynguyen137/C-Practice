#include <stdio.h>
#include <conio.h>

//Tinh tong S = 1 + 1/2 + 1/3 + ... + 1/n

int main() {
	int n,i;
	float S=0; 
	scanf("%d", &n);
	for(i=1; i<=n ; i++) {
		S+= 1.0/i;
	}
	printf("Tong la : %f",S);
	return 0; 
}
	
