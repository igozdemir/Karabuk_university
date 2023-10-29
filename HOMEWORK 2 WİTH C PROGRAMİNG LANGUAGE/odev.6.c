#include<stdio.h>
int main(){
	int a,b;
	int x;
	int temp;
	printf("lutfen iki sayi giriniz\n");
	scanf("%d\n %d",&a,&b);
	if(a<b){
		x=b;
		while(a<b){
		if(x%b==0 && x%a==0){
			printf("en kucuk ortak kat=%d",x);
			return 0;
		}
		else{
			x++;
		}
	}
}
	else{
		temp=a;
		a=b;
		b=temp;
		x=b;
		while(a<b){
		if(x%b==0 && x%a==0){
			printf("en kucuk ortak kat=%d",x);
			return 0;
		}
		else{
			x++;
		}
	}
}
}


