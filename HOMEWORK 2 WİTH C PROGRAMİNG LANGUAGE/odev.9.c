#include<stdio.h>
#include<math.h>
int main(){
	int a,x,b,sum;
	int bas=1;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	x=a;
	while(a>=10){
		a=a/10;
		bas++;
	}
	a=x;
	while(a>0){
		b=a%10;
		sum+=pow(b,bas);
		a=a/10;
	}a=x;
	if(sum==a){
		printf("%d armstrong sayidir",a);
	}
	else{
		printf("%d armstrong sayi degildir",a);
	}
	return 0;
}
