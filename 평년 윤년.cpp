#include<stdio.h>
int main(){
	int year;
	printf("�����Է�: ");
	scanf("%d",&year);
	if(year%4==0){
		if(year%100!=0||year%400==0){
			printf("�����Դϴ�.");
		}
		else{
			printf("����Դϴ�.");
		} 
	}
	else{
		printf("����Դϴ�.");
	}
	return 0;
}
