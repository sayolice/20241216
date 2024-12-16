#include<stdio.h>
int main(){
	int num;
	int sum=0;
	printf("숫자 입력: ");
	scanf("%d",&num);
	for(int n=1;n<=num; n++){
		if(num%n==0){
			sum=sum+n;
		}
	}
	printf("%d의 약수들의 합: %d",num,sum);
	return 0;
}
