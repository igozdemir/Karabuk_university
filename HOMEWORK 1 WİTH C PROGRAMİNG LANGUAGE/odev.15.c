#include<stdio.h>
int main(){
	int n;
	printf("lutfen bir sayi degeri giriniz\n");
	scanf("%d",&n);
	while(n!=1){
		printf("%d\n",n-1);
		n--;
	}
	return 0;
}
