#include <stdio.h>
#define size 100
int hesapla(int i){
	int arr[i];
	int x,y;
	for(y=0;y!=i;y++){
		printf("lutfen %d. ogrencinin notunu giriniz\n",(y+1));
	    scanf("%d",&x);
	    arr[y]=x;
    }
	int a;
	int kalan=0;
	int gecen=0;
	float ort=0;
	for(a=0;a!=i;a++){
		ort+=arr[a];
	}
	ort=ort/i;
	for(a=0;a!=i;a++){
		if(arr[a]<ort){
			kalan+=1;
		}
		else{
			gecen+=1;
		}
	}
	return printf("sinif ortalamasindan dusuk olanlar kalir.\nkalan kisi sayisi:%d \ngecen kisi sayisi:%d \nsinif ortalamasi:%f",kalan,gecen,ort);
	
}
int main(){
	int i;
	printf("lutfen kac ogrenci sayisi giriniz\n");
	scanf("%d",&i);
    hesapla(i);
	return 0;
}
