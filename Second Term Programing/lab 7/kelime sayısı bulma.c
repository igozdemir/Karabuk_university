#include<stdio.h>
#include<string.h>
#include <stdlib.h>
int main(){
	char *ptr;
	char array[100];
	ptr=array;
	printf("lutfen bir array giriniz\n");
	scanf("%s",ptr);
	int i,a,x,y;
	a=0;
	i=strlen(ptr);
	ptr=(char*)malloc(i * sizeof(char));
	int kelsayi=0;
	int harf=0;
	for(a;a!=i;a++){
		for(x=65,y=97;x!=91 ;x++,y++){
			if(array[a]==x || array[a]==y){
				harf++;
				printf("XX%d\n",harf);
			}
			else{
			    if(harf>1) kelsayi++;
			    harf=0;
			    x=91;
		    }
		}
		
	}
	printf("kelime sayisi = %d",kelsayi);

}
