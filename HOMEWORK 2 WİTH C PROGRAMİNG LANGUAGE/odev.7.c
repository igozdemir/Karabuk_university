#include<stdio.h>
int main(){
	int n,a;
	printf("lutfen bir n sayisi giriniz\n");
	scanf("%d",&n);
	if(n>=2){
	for(n;n>=3;n--){
		    a=n-1;
		while(a>=1){
			if(a==1){
				printf("%d asal sayidir\n",n);
			}
			if(n%a==0){
				a=0;
			}
			else{
				a--;	
			}
		}
	}
	printf("%d",2);
}
	return 0;
}
