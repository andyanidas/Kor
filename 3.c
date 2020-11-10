#include "3.h"

void printMenu (){
	printf("1.Tsuivan\n2.Budaa\n3.Shol");
}

int factorial(int n) { //n=7

	int i, product = 1;
	
	for (i = 2; i <= n; ++i){ // i= 2 3 4 5 6 7
		product *= i; //product = 2 //6/24
	}
	// product = 5040
	
	
	return product;
}

double twice(double x){
	return 2.0 * x;
}

