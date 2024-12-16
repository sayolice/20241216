#include<stdio.h>
int main(){
	int kg;
	double m;
	
	printf("신장 입력(m): ");
	scanf("%lf",&m);
	printf("몸 무게 입력: ");
	scanf("%d",&kg);
	
	double bmi=kg/(m*m);
	
	if(bmi<=18.5){
		printf("저체중");
	}
	else if(bmi<=22.9){
		printf("정상");
	}
	else{
		printf("비만");
	} 
	
	return 0;
}
