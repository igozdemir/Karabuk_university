#include<stdio.h>
int main(){
	int a=1000;
	int b=2000;
	int sum=0;
	while(a!=b){
	printf("%d\n",a+2);
	a=a+2;
	sum=sum+a;
	}
	sum-=2000;
	printf("%d",sum);
	return 0;
}
