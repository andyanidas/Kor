#include <stdio.h>
int fact(int); //prototype

int cnt=0;


int main(void)
{
	char a = 'A',c='C';
	
	
	printf("%5d: %s%d%s%c%s%c. \n", cnt++," Move disk ",1, " from tower ",a, " to tower ",c);
	
	int n = 7;
	printf("%d ! = %d\n", n, fact(n));
	return 0;
}


int fact(int n) /*recursive version */
{
	int static number =0;
	number++;
	
	if (n <= 1){
		return 1;
	}else{
		return (n * fact(n-1));
	}
}
