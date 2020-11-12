#include <stdio.h>
#include <math.h>
#define N 100

int main(void)
{		//F11985723		//0  1  2  3    4  #index
	int arr[5] = {1,10,9,-445,9999};
	
//	printf("%d",arr[0]);
	//				 index=0			index=1			index=2				index=3	
	//int arr1[4][5]={{10,11,12,13,14},{20,21,22,23,24},{30,31,32,33,34},{40,41,42,43,44}};
	int arr1[2][3];
	
	printf("Enter 6 numbers: ");
	int k,o;
	for(k=0;k!=2;k++){
		for(o=0;o!=3;o++){
			scanf("%d",&arr1[k][o]);
		}
	}
	//			   
	//arr1[2][3] = {{1,2,3},{4,5,6}}
	
	/*
	char ug[5] ={'h','e','l','l','o'};
	int i,j;
	for(i=0;i<4;i++){ //i-> index number
		for(j=0;j<5;j++){
			printf("%d ",arr1[i][j]);
		}
		printf("\n");
		
	}
	*/
	
	//arr1[2][3] = {{1,2,3},{4,5,6}}
	for(k=0;k!=2;k++){
		for(o=0;o!=3;o++){
			printf("%d ",arr1[k][o]);
		}
		printf("\n");
	}
	
	int a =5;
	printf("%p",&a);
	
	return 0;
}


