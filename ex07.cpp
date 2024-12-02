#include <stdio.h>
int main(){
	int a,b;
	
	printf("Nhap so dong: ");
	scanf("%d",&a);
	printf("Nhap so cot: ");
	scanf("%d",&b);
	
	int arr[a][b];
	
	printf("Nhap cac phan tu trong mang: ");
	for (int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			scanf("%d",&arr[i][j]);
		}
	}
	
	for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    return 0;

	
	
	
}
