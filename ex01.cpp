#include <stdio.h>
int main(){
	int arr[]={1,2,3,4,5};
	int n;
	int s = sizeof(arr)/sizeof(arr[0]);
	
	printf("Nhap so: ");
	scanf("%d",&n);
	
	for(int i=0;i<s;i++){
		if(n==arr[i]){
			printf("Vi tri: %d",i+1);
			break;
		}
		
			
			
		}
		
		
	
	    
	return 0;
}
