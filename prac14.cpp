#include <stdio.h>
#include <conio.h>

//Chuong trinh giai he phuong trinh bac nhat 2 an

float solveX(float a,float b,float c,float d,float e,float f) {
	float x;
	x = (c*e - f*b)/(a*e - b*d);
	return x;
}

float solveY(float a,float b,float c,float d,float e,float f) {
	float y;
	y = (c*d - f*a)/(b*d- e*a);
	return y;
}

int main() {
	float a,b,c,d,e,f;
	printf("Giai he phuong trinh bac nhat: \nAx + By = C\nDx + Cy = E");
	printf("\nNhap A, B, C:");
	scanf("%f%f%f",&a,&b,&c);
	printf("\nNhap D, E, F:");
	scanf("%f%f%f",&d,&e,&f);
	printf("\nKet qua la x= %.2f y= %.2f ", solveX(a,b,c,d,e,f), solveY(a,b,c,d,e,f) );
	return 0;
}
