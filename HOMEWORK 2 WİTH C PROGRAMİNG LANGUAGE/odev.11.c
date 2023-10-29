#include<stdio.h>
int main(){
	int a,x,sum;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	x=a-1;
	for(x;x>0;x--){
		if(a%x==0){
			sum=sum+x;
		}
	}
        sum--;
    if(sum==a){
    	printf("%d mukemmel sayidir",a);
	}
	else{
		    	printf("%d mukemmel sayi degildir",a);

	}
	return 0;
}
