#include <stdio.h>
int main(){
	int arr[5]={3,1,5,2,6,};
	
	for(int i=0;i<5;i++){
		int min = i;

		for(int j=i+1;j<5;j++){
			if(arr[j]<arr[min]){
				min = j;
			}
		}
	}
	
	if(min != i){
		int temp;
	    temp = arr[min];
	    arr[min] = arr[i];
	    arr[i] = temp;
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
	
	return 0;
}



