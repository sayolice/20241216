#include<stdio.h>
int main(){
	int num;
	int sum=0;
	printf("���� �Է�: ");
	scanf("%d",&num);
	for(int n=1;n<=num; n++){
		if(num%n==0){
			sum=sum+n;
		}
	}
	printf("%d�� ������� ��: %d",num,sum);
	return 0;
}
