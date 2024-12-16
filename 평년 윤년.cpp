#include<stdio.h>
int main(){
	int year;
	printf("연도입력: ");
	scanf("%d",&year);
	if(year%4==0){
		if(year%100!=0||year%400==0){
			printf("윤년입니다.");
		}
		else{
			printf("평년입니다.");
		} 
	}
	else{
		printf("평년입니다.");
	}
	return 0;
}
