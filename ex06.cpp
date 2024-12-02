#include <stdio.h>
int main(){
	int arr[7]={1,3,5,2,6,9,8};
	int flag = -1;
	int size = sizeof(arr)/sizeof(int);
	int n;
	
	for(int i=0;i<7-1;i++){
		for(int j=0;j<7-1-i;j++){
			if(arr[j]>arr[j+1]){
				int temp;
				temp = arr[j+1];
				arr[j+1] = arr[j];
				arr[j] = temp;
				
			}
		}
	}
	for(int i=0;i<7;i++){
		printf("%d ",arr[i]);
	}
	printf("\n");
	
	printf("Nhap gia tri can tim: ");
	scanf("%d",&n);
	
	for(int i=0;i<size;i++){
		if(arr[i]==n){
			flag=i;
			break;
		}
	}
	if(flag!=-1){
		printf("Phan tu can tim o vi tri: %d ",flag);
	}
	else{
		printf("Phan tu khong hop le");
	}
	
	return 0;
}
