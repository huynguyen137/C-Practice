#include <stdio.h>
#include <conio.h>

//Nhap vao 1 mang so thuc va tim gia tri lon nhat cua mang

int main(){
	int i, size;
	float arr[50];
	printf("Nhap kich thuoc mang: ");
	scanf("%d", &size);
	
	
	printf("Nhap cac phan tu cua mang: ");
	for(i = 0; i <size; i++) {
		scanf("%f", &arr[i]);
	}
	
	
	printf("\nMang vua nhap vao la: ");
	for(i = 0; i <size; i++) {
		printf("\t%4.2f", arr[i]);
	}
	
	
	float max;
	max = arr[0];
	for(i=0; i<=size; i++){
		if(max < arr[i] ) max = arr[i];
	}
	printf("\nGia tri lon nhat cua mang la: %4.2f", max);
	return 0;
}
