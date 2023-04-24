/*
 * HW3_EX2.c
 *
 *  Created on: Apr 18, 2023
 *      Author: mrmkh
 */


#include<stdio.h>
int main(){
	float numbers[30];
	int x;
	float sum;
	float average;
	printf("Enter the numbers of data");
	fflush(stdout);
	scanf("%d",&x);
	for(int i=1;i<=x;i++){
		printf("%d. Enter number:",i);
		fflush(stdout);
		scanf("%f",&numbers[i]);
	}
	for(int i=1;i<=x;i++){
		sum = sum + numbers[i];
	}
	average=sum/x;
	printf("Average%0.2f",average);
	return 0;
}
