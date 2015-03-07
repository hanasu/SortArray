#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int num_of_rand; //the number of random numbers to be generated from user input
	int a, b; //for loop indexes	
	int compare(); //the comparator function necessary for qsort()

	printf("Please enter an integer: ");
	scanf("%d",&num_of_rand);
	srand(time(NULL)); //seed random number generator

	int rand_array[num_of_rand]; //holds the randomly generated numbers
	
	for(a = 0; a < num_of_rand; a++) {
		rand_array[a] = rand() % 100; //generate a random number between 0-99
		printf("%d ",rand_array[a]); //output the numbers in the array to console
	}

	printf("\n"); //console formatting 
	
	qsort(rand_array, num_of_rand, sizeof(int), compare); //call the sorting function

	for(b = 0; b < num_of_rand; b++) {
		printf("%d ",rand_array[b]);
	}	

	printf("\n"); //console formatting

	return 0;

}

int compare(const void *a, const void *b) {

	return ( *(int*)a - *(int*)b );

}
