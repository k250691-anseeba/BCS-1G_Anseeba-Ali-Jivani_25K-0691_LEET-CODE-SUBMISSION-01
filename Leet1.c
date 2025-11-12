#include <stdio.h>

int main(){
	int num [1000];
	int sum[1000];
	int n,i;
	
	do{
	printf("\nEnter the size of the array (Range: 1-1000):  ");
	scanf("%d", &n);
	if(n<1 || n>1000){
		printf("Size out of range!. Re-enter\n");
	}
    }while(n<1 || n>1000);
	
	printf("\nEnter %d numbers to formate a Running Array\nValue must be within range -1000000 and 1000000\n", n);
	for(i=0 ; i<n ; i++){
		do{
		printf("\nEnter element %d:  ", i+1);
		scanf("%d", &num[i]);
		if(num[i]<-1000000 || num[i]>1000000){
		    printf("Value out of range! Re-enter\n");
		}
	}while(num[i]<-1000000 || num[i]>1000000);
	}
	
	sum[0] = num[0];
	for(i=1 ; i<n ; i++){
		sum[i] = num[i] + sum[i-1];
	}
	
	printf("\nRunning Array is:  {");
	for(i=0 ; i<n ; i++){
	printf("%d", sum[i]);
	if(i<n-1){
		printf(", ");
	}
    }
    printf("}\n\n");

	return 0;
}



