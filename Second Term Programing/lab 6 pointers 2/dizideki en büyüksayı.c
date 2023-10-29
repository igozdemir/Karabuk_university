#include<stdio.h>
#include<stdlib.h>
int max(int *ptr,int x){
    int i,max;
    max=*ptr;
    for(i=1;i!=x;i++){
		if(*(ptr+i)>max) max=*(ptr+i);
	}
    return max;	
}

int main(){
	int x,i;
	int *ptr;
	printf("lutfen kac eleman gireceginizi giriniz\n");
	scanf("%d",&x);
	ptr=(int*)calloc(x,sizeof(int*));
	printf("lutfen sayilari giriniz\n");
	for(i=0;i!=x;i++){
		scanf("%d",(ptr+i));
	}
	printf("%d en buyuk sayidir",max(ptr,x));
	return 0;
}
