#include<stdio.h>
int main(){
	int n;//�Է¹޴¼�  
	int t=8;//8,4,2,1
	int a=4; 
	printf("10���� �Է�: ");
	scanf("%d",&n);
	
	if(n<0||n>15){ 
		printf("0-15�� ���� �ٽ��Է�");
		return 0;
	}
	
	for(int num=1;num<=4;num++){
		if(n>=t){
		n=n-t;
		t=t-a;
		a=a/2;
		printf("1");
		}
		else if(n<t){
			t=t-a;
			a=a/2;
			printf("0");
		}
	}
	
	return 0;
}
// 8 4 2 1
