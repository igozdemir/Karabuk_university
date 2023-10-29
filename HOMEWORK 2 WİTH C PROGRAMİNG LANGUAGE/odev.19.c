#include<stdio.h>
int main(){
	int n;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&n);
	int f;
	float sum;
	int pro=1;
	int a;
	sum=0;
	while(a<n){
		if(a==0){
			sum+=1;
		}
		else if(a==1){
			sum+=n;

		}
		else{
			f=a;
			pro=1;
			while(f!=1){
				pro*=f;
				f--;
			}
			sum+=pow(n,a)/pro;

		}
		a++;
	}
	printf("toplam=%f",sum);
	return 0;
}
