#include <assert.h>
#include <stdio.h>


int cnt=0;
void move(int, char, char, char);
int main(void)
{
	int n;
	printf("Input n(>0): ");
	//scanf("%d",&n);
	printf("\n");
//	assert(n>0);
	n=3;
	move(n, 'A', 'B', 'C');
	return 0;
}
void move(int n, char a, char b, char c)
{
	if (n==1) {
		cnt++;
		printf("%5d: %s%d%s%c%s%c. \n", cnt," Move disk ",1, " from tower ",a, " to tower ",c);
	}
	else {
		move(n-1, a, c, b);
		cnt++;
		printf("%5d: %s%d%s%c%s%c. \n", cnt," Move disk ",n, " from tower ",a, " to tower ",c);
		move(n-1, b, a, c);
	}
}
