#include<stdio.h>
int main(){
	int t;
	printf("숫자입력: ");
	scanf("%d",&t);
	int sum;
	for(int n=0; n<=t;n++){
		sum=sum+n;
		n++;
	}
	printf("짝수들의 합: %d",sum);
	return 0;
}
