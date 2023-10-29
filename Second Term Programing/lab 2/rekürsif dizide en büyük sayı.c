#include <stdio.h>
#define size 5
int max(int array[size]){
	static int i=0;
	static int maxx=-9999;
	if(array[i]>maxx){
		maxx=array[i];
	}
	if(i==size){
		return maxx;
	}
	i++;
	return max(array);
}
int main(){
 	int x,i;
 	int array[size];
 	printf("lutfen bir sayi dizisi giriniz\n");
 	for(i=0;i<size;i++){
 		scanf("%d",&x);
 		array[i]=x;
	 }
 	printf("sonuc:%d",max(array));
 	return 0;
 }
