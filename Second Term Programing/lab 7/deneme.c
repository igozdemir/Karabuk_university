#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){
	char *ptr;
	char array;
	ptr=array;
	int i=0;
	printf("lutfen bir array giriniz\n");
    scanf("%s",ptr);
    i=strlen(ptr);
    ptr=(char*)malloc(i*sizeof(char));
    int a,x;
    x=i;
	int kucuk=97;
	int buyuk=65;
	for(a=0;a<26;a++){
		i=x;
		int sayi=0;
		for(i;i!=0;i--){
			if(*(ptr+i)==buyuk || *(ptr+i)==kucuk){
				sayi++;
			}
		}
		if(sayi>0){
			printf("%d adet %c veya %c \n",sayi,kucuk,buyuk);
		}
		kucuk++;
		buyuk++;
	}
	free(ptr);
	return 0;
}
