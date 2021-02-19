#include <stdio.h>
#include <conio.h>
#include <math.h>

//Tinh T(n,x) = x^n

int main() {
	int n,x,T;
	printf("Tinh T(n,x)= x^n\nNhap x va n: ");
	scanf("%d%d", &x , &n);
	T = pow(x, n);
	printf("\nKet qua : %d", T);
	return 0;
	
}
