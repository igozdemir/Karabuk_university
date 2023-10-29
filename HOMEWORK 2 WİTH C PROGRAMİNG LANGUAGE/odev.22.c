#include<stdio.h>
int main(){
	int n=100;
	int m=200;
	int sum=0;
	while(n!=m){
		if(n%9==0){
			printf("%d\n",n);
			sum+=n;
		}
		n++;
	}
	printf("toplam=%d",sum);
	return 0;
}
