#include <stdio.h>

int main(){
	
	int num [1000];
	int shuffle[1000];
	int n, i, j, k, m;
	
	do{
	printf("\nEnter n (range: 1-500):  ");
	scanf("%d", &n);
	if(n>500 || n<1){
		printf("Size out of range!. Re-enter\n");
	}
    }while(n>500 || n<1);
	
	printf("\nEnter %d numbers to Shuffle the array later.\nValue must be within range 1 to 1000\n", n*2);
	for(i=0 ; i<n*2 ; i++){
		do{
		printf("\nEnter element %d:  ", i+1);
		scanf("%d", &num[i]);
		if(num[i]< 1 || num[i]>1000){
		    printf("Value out of range! Re-enter\n");
		}
	}while(num[i]<1 || num[i]>1000);
	}

	
	for(j=0 , m=0 ; m<n ; j+=2, m++){
		    shuffle[j] = num[m];
	}
	
	for(j=1, k=n ; k<n*2 ; j=j+2, k++){
			shuffle[j] = num[k];
	}
	
	printf("\n\nShuffled Array: {");
	for(i=0 ; i<n*2 ; i++){
		printf("%d", shuffle[i]);
		if(i<(n*2)-1){
			printf(", ");
		}
	}
	printf("}");
	
}
