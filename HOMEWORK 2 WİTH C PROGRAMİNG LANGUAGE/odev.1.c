#include<stdio.h>
int main(){
	int a,b,alan,cevre;
	printf("lutfen dikdortgenin uzun ve kisa kenarini giriniz\n");
	scanf("%d %d",&a,&b);
	alan=a*b;
	cevre=2*(a+b);
	printf("dikdortgenin alani=%d\n dikdortgenin cevresi=%d",alan,cevre);
	return 0;
	
}
