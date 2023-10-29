#include<stdio.h>
int main(){
	int a;
	int pro=1;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	while(a!=0){
		pro=pro*a;
		a--;
	}
	printf("%d",pro);
	return 0;
}
