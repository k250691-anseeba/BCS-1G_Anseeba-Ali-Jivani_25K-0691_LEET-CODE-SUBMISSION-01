#include <stdio.h>

int main(){
	
	int num [100];
	int n, i, j, m;
	int count_even = 0;
	int count_odd = 0;
	int count1 = 0;
	int count2 = 0;
	
	do{
	printf("\nEnter n (range: 1-100):  ");
	scanf("%d", &n);
	if(n>100 || n<1){
		printf("Size out of range!. Re-enter\n");
	}
    }while(n>100 || n<1);
	
	printf("\nEnter %d numbers.\nValue must be within range 1 to 1000\n", n);
	for(i=0 ; i<n ; i++){
		do{
		printf("\nEnter element %d:  ", i+1);
		scanf("%d", &num[i]);
		if(num[i]< 1 || num[i]>1000){
		    printf("Value out of range! Re-enter\n");
		}
	}while(num[i]<1 || num[i]>1000);
	}
	
	
	//replace even/odd by 0/1
	for(j=0 ; j<n ; j++){
		if(num[j] % 2 == 0){
			num[j] = 0;
			count_even++;
		}
		else{
			num[j] = 1;
			count_odd++;
		}
	}
	
	//print in ascending order
	printf("\n\nModifield Array: {");
	for(m=0 ; m<n ; m++){
		if(num[m] == 0){
			printf("%d", num[m]);
			count1++;
			if(count1 <= count_even){
				printf(", ");
			}
		}
	}
	
	for(m=0 ; m<n ; m++){
		if(num[m] == 1){
			printf("%d", num[m]);
			count2++;
		if(count2 <= count_odd-1){
			printf(", ");
		}
	    }
    }
	printf("}\n\n\n");
	
	return 0;
}
