#include<stdio.h>
int main(){
	int n,x,a,sum;
	printf("lutfen bir n sayisi giriniz\n");
	scanf("%d",&n);
	x=n;
	while(n!=0){
		a=n%10;
		sum=(sum*10)+a;
		n=n/10;
	}
	if(sum==x){
		printf("%d polindrom sayidir",x);
	}
	else{
		printf("%d polindrom sayi degildir",x);
	}
	return 0;
}
