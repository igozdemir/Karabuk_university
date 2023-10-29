#include <stdio.h>
int ebob(int x,int y){
	static int i=1;
	static int r;
	if(x%i==0 && y%i==0){
			r=i;
		} 
	i++;
	if(i==x || i==y){
		return r;
	}
	else{
		return ebob(x,y);
	}
}

int main(){
 	int x,y;
 	printf("lutfen iki sayi giriniz\n");
 	scanf("%d",&x);
 	scanf("%d",&y);
 	printf("sonuc:%d",ebob(x,y));
 	return 0;
 }
