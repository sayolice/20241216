#include<stdio.h>
int main(){
	int t;
	printf("�����Է�: ");
	scanf("%d",&t);
	int sum;
	for(int n=0; n<=t;n++){
		sum=sum+n;
		n++;
	}
	printf("¦������ ��: %d",sum);
	return 0;
}
