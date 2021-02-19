#include <stdio.h>
#include <conio.h>

//Tinh tong S = 1 + 1/3 + 1/5 + ... 1/2n+1

int main(){
	int n,i=1;
	float S=0;
	scanf("%d", &n);
	while(i< 2*n+1) {
		S += 1.0/i;
		i+=2;
	}
	printf("Tong la : %f", S);
	return 0;
}
