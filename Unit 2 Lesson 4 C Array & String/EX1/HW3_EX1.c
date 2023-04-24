/*
 * HW3_EX1.c
 *
 *  Created on: Apr 18, 2023
 *      Author: mrmkh
 */

#include<stdio.h>
int main(){
	float mat1[2][2];
	float mat2[2][2];
	float mat_sum[2][2];
	for(int i = 0 ;i<2;i++){
		for(int j=0 ; j<2;j++){
			printf("inter mat_1 %d:%d",i,j);
			fflush(stdin);fflush(stdout);
			scanf("%f",&mat1[i][j]);
		}
	}
	for(int i = 0 ;i<2;i++){
		for(int j=0 ; j<2;j++){
			printf("inter mat_2 %d:%d",i,j);
			fflush(stdout);
			scanf("%f",&mat2[i][j]);
		}
	}
	for(int i = 0 ;i<2;i++){
		for(int j=0 ; j<2;j++){
			mat_sum[i][j]=mat1[i][j]+mat2[i][j];
			fflush(stdout);
		}
	}
	printf("mat1 + mat_2 =");
	printf("\r\n");
	for(int i = 0 ;i<2;i++){
			for(int j=0 ; j<2;j++){
				printf("%0.2f",mat_sum[i][j]);
				printf("\t");
			}
			printf("\r\n");
		}
	return 0;
}
