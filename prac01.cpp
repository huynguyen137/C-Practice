#include <stdio.h>
#include <conio.h>

//Tinh S = 1 + 2 + 3 + 4 + ... + n

int main() {
	int n,i,S=0;
	scanf("%d", &n);
	for(i=0; i<=n ; i++) {
		S+= i;
	}
	printf("Tong la : %d",S);
	return 0; 
}
	
