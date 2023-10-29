#include<stdio.h>
int main(){
	int n,a,sum;
	printf("lutfen bir n sayisi giriniz\n");
	scanf("%d",&n);
	if(n>=2){
	for(n;n>=3;n--){
		    a=n-1;
		while(a>=1){
			if(a==1){
				printf("%d\n",n);
				sum+=n;
			}
			if(n%a==0){
				a=0;
			}
			else{
				a--;	
			}
		}
	}
	printf("%d\n",2);
	sum++;
}
    printf("asal sayýlarin toplami=%d",sum);
	return 0;
}
