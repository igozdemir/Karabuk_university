#include<stdio.h>
int main(){
	int step;
	int low;
	int high;
	int count=0;
	int temp;
	printf("lutfen step , low ve high degerlerini giriniz:\n");
	scanf("%d %d %d",&step,&low,&high);
	if(low<high){
		for(low;low<high;){
			
		   low=low+step;
		   if(low<high){
		printf("%d\n",low);
		  count++;
		   }
		    
        		
		}	
        printf("adet : %d",count);
		}
	
	else{
		temp=low;
		low=high;
		high=temp;
		for(low;low<high;){
			
		   low=low+step;
		   if(low<high){
		printf("%d\n",low);
		  count++;
		   }
		    
        		
		}	
        printf("adet : %d",count);
	}
	return 0;
}
