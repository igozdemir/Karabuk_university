#include<stdio.h>
int main(){
	int a,x,sum;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&a);
	for(a;a>0;a--){
			x=a-1;
			sum=0;
	    for(x;x>0;x--){
		    if(a%x==0){
			    sum=sum+x;
		    }
	    }
        if(sum==a){
    	    printf("%d mukemmel sayidir\n",a);
	    }
    }
	return 0;
}
