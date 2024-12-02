#include <stdio.h>
int main(){
	int arr[7]={1,3,5,2,6,9,8};
	
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
	
	return 0;
}
