#include <stdio.h>
#define size 10
int max(int array[size],int maxx){
	static int i=0;
	if(array[i]>maxx){
		maxx=array[i];
	}
	if(i==size-1){
		return maxx;
	}
	i++;
	return max(array,maxx);
}
int main(){
 	int x,i,maxx;
 	int array[size];
 	printf("lutfen bir sayi dizisi giriniz\n");
 	for(i=0;i<size;i++){
 		scanf("%d",&x);
 		array[i]=x;
	 }
	maxx=array[0];
 	printf("sonuc:%d",max(array,maxx));
 	return 0;
 }
