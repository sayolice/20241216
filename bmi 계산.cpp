#include<stdio.h>
int main(){
	int kg;
	double m;
	
	printf("���� �Է�(m): ");
	scanf("%lf",&m);
	printf("�� ���� �Է�: ");
	scanf("%d",&kg);
	
	double bmi=kg/(m*m);
	
	if(bmi<=18.5){
		printf("��ü��");
	}
	else if(bmi<=22.9){
		printf("����");
	}
	else{
		printf("��");
	} 
	
	return 0;
}
