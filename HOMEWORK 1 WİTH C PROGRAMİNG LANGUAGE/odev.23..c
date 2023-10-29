#include<stdio.h>
int main(){
	int a,x,y;
	int sum;
	printf("sayi gir\n");
	scanf("%d",&a);
	y=a;
	while(a!=0){
		x=a%10;
		a/=10;
		sum=sum*10+x;
	}
	if(sum==y){
		printf("%d",y);
		printf(" polindromdur");
	}
	else{
			printf("%d",y);
		printf(" polindrom degildir");
	}
	
}
