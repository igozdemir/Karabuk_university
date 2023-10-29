#include<stdio.h>
int main(){
	int a;
	int b=1;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	while(b<=10){
		printf("%d\n",b*a);
		b++;
	}
	return 0;
}
