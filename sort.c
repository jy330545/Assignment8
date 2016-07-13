//Justin Yu//
//This is definitely not completed but I couldn't figure the rest out. Sorry.//

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main() {
	
	srand(time(NULL));
	int num;
	int i;
	int *array
	int *arrayAscend;
	int *arrayDescend;

	printf("Enter number of integers\n");
	scanf("%d", &num);

	array = (int*) malloc(sizeof(int)*num);
	arrayAscend = (int*) malloc(sizeof(int)*num);
	arrayDescend = (int*) malloc(sizeof(int)*num);

	for(i = 0; i < num; i++) {
		arrayAscend[i] = array[i];
		arrayDescend[i] = array[i]; }	

	for(i = 0; i < num; i++) {
		for(int j = 0; k < num - 2; j++)

	
	// I'm not sure what to add here//


	free(array);
	free(arrayAscend);
	free(arrayDescend);
	
	
