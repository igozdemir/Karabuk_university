#include <stdio.h>
float vucutindeksi(float boy,int kilo){
	float result;
	result=kilo/(boy*boy);
	if(result<=18){
		return printf("vucut indeksiniz:%f, zayif kategoridesiniz",result);
	}
	else if(result>18 && result<=25){
		return printf("vucut indeksiniz:%f, normal kategoridesiniz",result);
	}
	else if(result>25 && result<=30){
		return printf("vucut indeksiniz:%f, kilolu kategoridesiniz",result);
	}
	else{
		return printf("vucut indeksiniz:%f, obez kategoridesiniz",result);
	}
}
int main(){
	float boy,kilo,result;
	printf("lutfen metre cinsinden boyunuzu giriniz\n");
	scanf("%f",&boy);
	printf("lutfen kilogram(kg) cinsinden kilonuzu giriniz\n");
	scanf("%f",&kilo);
	vucutindeksi(boy,kilo);
	return 0;
}
