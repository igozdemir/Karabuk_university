#include<stdio.h>
int main(){
	int array[3];
	int *ptr;
	int i,a,temp;
	printf("lutfen 3 elemanli bir dizi giriniz\n");
	for(i=0;i<3;i++){
		scanf("%d",&a);
		array[i]=a;
	}
	ptr=array;
	printf("\nBEFORE\n");
	for(i=0;i<3;i++){
		printf("element %d = %d\n",i,*(ptr+i));
	}
	temp=*ptr;
	for(i=0;i<2;i++){
		*(ptr+i)=*(ptr+i+1);
	}
	*(ptr+2)=temp;
	printf("\nAFTER\n");
	for(i=0;i<3;i++){
		printf("element %d = %d\n",i,*(ptr+i));
	}
	return 0;
}
