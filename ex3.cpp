#include <stdio.h>
int main(){
	int arr[]={1,3,5,2,4};
	for(int i=1;i<5;i++){
		int key = arr[i];
		int j = i - 1;
		
		while(j>=0&&arr[j]>key){
			arr[j+1] = arr[j];
			j = j - 1;
		}
		arr[j+1]=key;
	}
	for(int i=0;i<5;i++){
		printf("%d ",arr[i]);
	}
}
