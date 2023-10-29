#include <stdio.h>
int main(){
	int n;
	printf("lutfen bir sicaklik degeri giriniz\n");
	scanf("%d",&n);
	if(n>0){
		printf("donma noktasinin ustunde");
	}
	else if(n<0){
		printf("donma noktasinin altinda");
	}
	else{
		printf("donma noktasindadir");
	}
	return 0;
	
	
}
