#include<stdio.h>
int main(){
	
	int a[5][5]={{0,0,7,1,0},{1,2,4,5,1},{2,4,2,3,2},{3,6,0,4,3},{4,8,2,5,4}};
	int i,j;
	
	for(i=0;i<5;i++){
		//for (j=0;j<1;j++){
			printf("%d ", a[i][j]);
			printf("%d ", a[i][j+1]);
			printf("%d ", a[i][j+2]);
			printf("%d ", a[i][j+3]);
			printf("%d\n", a[i][j+4]);
	//	}
	}
	/*
	for(i=0;i<5;i++){
		printf
	}
	*/
	return 0;
}
