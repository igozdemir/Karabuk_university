#include<stdio.h>
int main(){
	int a;
	int ilkbasamak;
	int sonbasamak;
	printf("sayi gir lan canimi sikma\n");
	scanf("%d",&a);
	ilkbasamak=a%10;
	for(a;a>10;){
		a=a/10;
		sonbasamak=a;	
	}
	printf("ilk basamak=%d\n",ilkbasamak);
	printf("son basamak=%d\n",sonbasamak);
	return 0;
}
