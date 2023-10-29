#include<stdio.h>
#include<math.h>
int main(){
	int n,x;
	int a=2;
	float sum=1.0;
	float af=1.0;
	printf("lutfen bir n sayisi giriniz\n");
	scanf("%d",&n);
	while(n>=a-2){
		x=a;
		af=1;
	    while(a>=1){
		    af*=a;
		    a--;
	    }
		printf("af1=%f\n",af);
	    a=x;
	    if(n>=a){
		    sum-=pow(n,a)/af;
		    printf("sum1=%f\n",sum);
		    a+=2;
	    }
	    else{
		    printf("sonuç=%f\n",sum);
		    return 0;
	    }
	    printf("a=%d\n",a);
	    af=1;
	    while(a>=1){
		    af*=a;
		    a--;
	    }
	    printf("af2=%f\n",af);
	    a=x+2;
	    if(n>=a){
		    sum+=pow(n,a)/af;
		    printf("sum2=%f\n",sum);
		    a+=2;
	    }
	    else{
		    printf("sonuç=%f\n",sum);
		    return 0;
	    }
    }
	printf("%f",sum);
	return 0;
}
