#include<stdio.h>
int main(){
	int n;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&n);
	while(n!=0){
		if(n%2==0){
			printf("%d",0);
			n=n/2;
		}
		else{
			printf("%d",1);
			n=n-1;
			n=n/2;
		}
	}
	return 0;
}*
