#include<stdio.h>
int main(){
	int num;
	printf("삼각형의 높이: ");
	scanf("%d",&num);
	for(int j=1; j<=num; j++){
		for(int n=1; n<=j; n++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
