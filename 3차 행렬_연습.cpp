#include<stdio.h>
int main()
{ //3차행렬을 만들어보자 
	int A [3][3] = {
	{0, 0, 0},
	{0, 3, 4},
	{0, 5, 6}
	};
	int B[3][3] = {
	{0, 0, 0},
	{0, 1, 5},
	{0, 3, 2} 
	};
int AB[3][3] = {0};
int sum[3][3] = {0};
for(int i=0; i<3; i++){
	for(int j=0; j<3; j++){
		for(int k=0; k<3; k++){
			AB[i][j]=A[i][k]*B[k][j];
			sum[i][j]+=AB[i][j];
		}			
	}
}
	printf("AB = \n");
	for(int i = 0; i <3; i ++) {
		for(int j = 0; j <3; j++){
			printf("%3d", sum[i][j]);
		}
	printf("\n");
	}
	return 0;
}
