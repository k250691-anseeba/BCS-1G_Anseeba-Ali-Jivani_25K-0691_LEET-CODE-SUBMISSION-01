# include <stdio.h>

int main(){
	
	float cel, kel, far;
	float ans[2];
	
	
	do{
	printf("Enter a temperature in celcius: (within range 1-1000)    ");
	scanf("%f", &cel);
	if(cel<1 || cel>1000){
		printf("Value out of range! Re-enter. ");
	}
    }while(cel<1 || cel>1000);
	
	kel = cel + 273.15;
	far = (cel*1.8) + 32;
	
	ans [0] = kel;
	ans [1] = far;
	
	printf("\n     [%.2f, ", ans[0]);
	printf("%.2f]\n", ans [1]);	
	
	return 0;
}
