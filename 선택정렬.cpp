#include<stdio.h>
int main(){
	int arr[]={9, 6, 7, 3, 5};
	int n= sizeof(arr)/sizeof(arr[0]);
	int i,j,small,temp;
	
	for(i=0; i<n-1; i++){
		small=i;
		for(j=i+1; j<n; j++){
			if(arr[j]<arr[small]){
				small=j;
			}
		}
		temp=arr[small];
		arr[small]=arr[i];
		arr[i]=temp;
	}
	for(i=0; i<n; i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
