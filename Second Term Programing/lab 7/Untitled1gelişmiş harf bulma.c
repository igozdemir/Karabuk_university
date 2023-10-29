#include<stdio.h>
#include<string.h>
int main(){
	char array[100];
	printf("lutfen bir array giriniz\n");
	gets(array);
	int i;
	i=strlen(array);
	int a;
	int kucuk=97;
	int buyuk=65;
	for(a=0;a<26;a++){
		i=strlen(array);
		int sayi=0;
		int sayi2=0;
		for(i;i!=0;i--){
			if(array[i-1]==buyuk) sayi++;
			if(array[i-1]==kucuk) sayi2++;
			}
		if(sayi>0){
			printf("%d adet %c \n",sayi,buyuk);
		}
		if(sayi2>0){
			printf("%d adet %c \n",sayi2,kucuk);
		}
		kucuk++;
		buyuk++;
	}
	return 0;
}

