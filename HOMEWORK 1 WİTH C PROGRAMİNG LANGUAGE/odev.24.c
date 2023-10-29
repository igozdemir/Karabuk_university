#include<stdio.h>
int main(){
	int a,x,sum,y;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
    printf("lutfen bir rakam giriniz\n");
    scanf("%d",&x);
    y=a;
    while(a!=0){
    	if(a%10==x){
    		sum++;
		}
		a/=10;
	}
	printf("%d sayisinda %d tane %d vardir",y,sum,x);
return 0;
}
