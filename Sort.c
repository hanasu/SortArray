//Brendan O'Dowd
//3/7/15 Version 1.2

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int num_of_rand; //the number of random numbers to be generated from user input
	int a, b; //for loop indexes
	int compare(); //the comparator function necessary for qsort()
	double mean(); //finds the mean average of an array
	double median(); //finds the median middle value of an array
	int mode(); //finds the most common number in an array

	printf("Please enter an integer: ");
	scanf("%d",&num_of_rand);

	srand(time(NULL)); //seed random number generator

	int rand_array[num_of_rand]; //array for randomly generated numbers

	printf("The unsorted array is: ");

	for(a = 0; a < num_of_rand; a++) {

		//generate a random number between 0-99
		rand_array[a] = rand() % 100;

		//output the numbers in the array to console
		printf("%d ",rand_array[a]);

	}

	printf("\n"); //console formatting
	printf("The sorted array is: ");

	//call the sorting function
	qsort(rand_array, num_of_rand, sizeof(int), compare);

	for(b = 0; b < num_of_rand; b++) {
		printf("%d ",rand_array[b]);
	}

	printf("\n"); //console formatting

	printf("The mean of the dataset is: %.1lf\n",mean(rand_array, num_of_rand));
	printf("The median of the dataset is: %.1lf\n",median(rand_array, num_of_rand));
	printf("The mode of the dataset is: %d\n",mode(rand_array));

	return 0;

}

int compare(const void *a, const void *b) {

	//if a-b < 0, b is bigger, if a-b = 0, they are the same 
	//element, if a-b > 0, a is bigger 
	return ( *(int*)a - *(int*)b ); 

}

double mean(int* array, int size) {

	int i;
	double result;

	for(i = 0; i < size; i++) {
		result = result + array[i];
	}

	return result/size;
}

double median(int* array, int size) {

	double result;

	if(size % 2 == 0) {
		result = (array[size/2-1] + array[(size/2)])/2;
	}
	else {
		result = array[size/2];
	}

	return result;
}

int mode(int* array, int size) {

	int* count; //array that will hold the number of appearances
	int j,k; //loop counter variables 
	
	for (j = 0; j < size; j++) {
		
	}
}

