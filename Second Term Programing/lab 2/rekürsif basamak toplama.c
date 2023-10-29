#include <stdio.h>
int sumbas(int x){
	int i;
	i=x%10;
 if(x==0){
 	return 0;
 }	
 else{
 	return i+sumbas(x/10);
 }
}

int main(){
 	int x;
 	printf("lutfen bir sayi giriniz\n");
 	scanf("%d",&x);
 	printf("sonuc:%d",sumbas(x));
 	return 0;
 }
