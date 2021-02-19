#include <stdio.h>
#include <conio.h>

//Tinh tong S = 1/2 + 1/4 + 1/6 + ... + 1/2n

int main() {
	int n,i;
	float S=0;
	scanf("%d",&n);
	for(i=2; i<=2*n; i+=2){
		S += 1.0/i;
	}
	printf("Tong la : %f", S);
	return 0;
}
