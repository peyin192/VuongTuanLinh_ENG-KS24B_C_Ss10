#include <stdio.h>
int main(){
	int arr[5]={1,3,5,2,4};
	
	int start = 0;
	
	int mid;
	int n;
	int end = sizeof(arr)/sizeof(int);
	
	
	
	for(int i=0;i<5-1;i++){
		for(int j=0;j<5-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp;
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				
			}
		}
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	 
	printf("Hay nhap so nguyen tu 1 den 5: ");
	scanf("%d",&n);
	
	while(start<=5){
		mid = (start + 5)/2;
		if(arr[mid]==n){
			printf("Vi tri phan tu can tim o vi tri : %d",mid);
			return 0;
		}
		else if(arr[mid]>n){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
	}
	printf("Khong tim thay phan tu");
	
    
	return 0;
}
