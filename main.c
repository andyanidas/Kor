#include "3.h"

int Gval =10;




int main(){

	int prod;
	prod = factorial(7); /* The function, factorial(), is called */
	printf("%d",prod);
	
	printf("\n\n");
	
	double a=10.5;
	double b = twice(a);
	b=twice(prod);

	printMenu();
	printf("%.2f",b);
	
	return 0;
}




