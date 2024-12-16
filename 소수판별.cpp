#include<stdio.h>
int main(){
	int num;
	printf("숫자입력: ");
	scanf("%d",&num);
	
	if(num==1||num==0){
		printf("다시입력: ");
		return 0;
	}
	for(int n=2; n<num; n++){
		if(num%n==0){
			printf("소수가아니다");
			return 0; 
		}
	}
	printf("소수");
	return 0;
}
