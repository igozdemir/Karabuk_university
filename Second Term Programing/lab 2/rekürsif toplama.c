#include <stdio.h>
 int sum(int x){
 	if(x==0){
 		return 0;
	 }
	 else{
	 return x+sum(x-1);
	 }
	 
 }
 
 int main(){
 	int x;
 	printf("lutfen bir sayi giriniz\n");
 	scanf("%d",&x);
 	printf("sonuc:%d",sum(x));
 	return 0;
 }
