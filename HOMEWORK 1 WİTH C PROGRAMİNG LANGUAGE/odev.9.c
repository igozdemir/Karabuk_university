#include<stdio.h>
int main(){
	int number;
	int low;
	int high;
	int temp;
	printf("lutfen bir sayi giriniz\n");
	scanf("%d",&number);
	printf("lutfen bir low degeri giriniz\n");
	scanf("%d",&low);
	printf("lutfen bir high degeri giriniz\n");
	scanf("%d",&high);
	if(low<high){
		for(low=low ;low<=high ;low++){
			if(low%number==0){
				printf("%d\n",low);
			}
		}
			
		}
		else{
			temp=low;
			low=high;
			high=temp;
			for(low=low ;low<=high ;low++){
			if(low%number==0){
				printf("%d\n",low);
			
		}
}
}
return 0;
}

