#include <stdio.h>
#include <conio.h>

//Tinh tong S = 1/2 + 2/3 + 3/4 + ... + n/(n+1)

int main() {
	int n,i=1;
	float S=0;
	scanf("%d", &n);
	while(i<=n) {
		S += float(i)/float(i+1);
		i++;
	}
	printf("Tong la : %f", S);
	return 0;
}
