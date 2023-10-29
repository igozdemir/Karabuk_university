#include<stdio.h>
int main(){
	int a,b,c;
	printf("lutfen 3 adet sayi giriniz\n");
	scanf("%d\n %d\n %d",&a,&b,&c);
    if(a<b){
    	if(b<c){
    		printf("en buyuk %d",c);
		}
		else{
			printf("en buyuk %d",b);
		}
	}
	else if(c<a){
		printf("en buyuk %d",a);
	}
	else{
		printf("en buyuk %d",c);
	}
	return 0;

}
