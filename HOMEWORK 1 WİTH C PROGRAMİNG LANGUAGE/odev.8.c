#include<stdio.h>
int main(){
	int a;
	int b;
	int temp;
	printf("lutfen 2 adet sayi giriniz\n");
	scanf("%d",&a);
	scanf("%d",&b);
	if(a<b){
	for( a=a ;a<=b ;a<=b){
		printf("%d\n",a);
		a++;
		}}
		else{
			temp=a;
			a=b;
			b=temp;
			for(a=a ;a<=b ;a<=b){
			printf("%d\n",a);
		a++;
			}
			return 0;
		}
		
	
		
	return 0;	
	}
