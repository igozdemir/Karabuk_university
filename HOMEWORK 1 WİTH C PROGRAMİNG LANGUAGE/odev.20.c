#include<stdio.h>
int main(){
	int a;
	int basamaksayisi;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	while(a!=0){
		a=a/10;
		basamaksayisi++;
	}
	printf("basamak sayisi=%d",basamaksayisi);
	return 0;
}
