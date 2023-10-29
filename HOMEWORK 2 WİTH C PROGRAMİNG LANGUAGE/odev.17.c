#include<stdio.h>
#include<math.h>
int main(){
	int n;
	float a=2.0;
	float sum=0.0;
	printf("lutfen bir n sayisi giriniz\n");
	scanf("%d",&n);
	while(n>=a){
		sum+=1/a;
		a++;
	}
	printf("sonuc=%f",sum);
	return 0;
} 






