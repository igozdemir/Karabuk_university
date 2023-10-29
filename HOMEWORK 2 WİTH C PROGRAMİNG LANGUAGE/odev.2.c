#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c,delta;
	int kok1,kok2;
	printf("lutfen ax^2+bx+c fonksiyonu icin a,b,c degerleri giriniz\n");
	scanf("%d %d %d",&a,&b,&c);
	delta=pow(b,2) - 4*a*c;
	kok1=(-b-pow(delta,0.5))/2*a;
	kok2=(-b+pow(delta,0.5))/2*a;
	printf("kok 1=%d\n kok 2=%d",kok1,kok2);
	return 0;
	
}
