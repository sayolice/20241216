#include<stdio.h>
int main(){
	int num;
	printf("�����Է�: ");
	scanf("%d",&num);
	
	if(num==1||num==0){
		printf("�ٽ��Է�: ");
		return 0;
	}
	for(int n=2; n<num; n++){
		if(num%n==0){
			printf("�Ҽ����ƴϴ�");
			return 0; 
		}
	}
	printf("�Ҽ�");
	return 0;
}
