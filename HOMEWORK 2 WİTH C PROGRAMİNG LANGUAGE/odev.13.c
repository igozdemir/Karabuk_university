#include<stdio.h>
int main(){
	int n,x,a,sum;
	int pro=1;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&n);
	x=n;
	while(n>0){
		a=n%10;
			pro=1;
		while(a>0){
			pro*=a;
			a--;
		}
		sum+=pro;
		n=n/10;
}
	n=x;
	sum--;
	if(sum==n){
		printf("%d guclu sayidir",n);
	}
	else{
		printf("%d guclu sayi degildir",n);
	}
}
