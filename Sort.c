#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {

	int num_of_rand; //the number of random numbers to be generated from user input
	int* array_index; //pointer to index the above array
	int a, b; //for loop indexes	
	int* insert_sort();

	printf("Please enter an integer: ");
	scanf("%d",&num_of_rand);
	srand(time(NULL)); //seed random number generator

	int rand_array[num_of_rand]; //holds the randomly generated numbers
	array_index = rand_array; //set the pointer to the initial value of the array

	for(a = 0; a < num_of_rand; a++) {
		rand_array[a] = rand() % 100; //generate a random number between 0-99
		printf("%d ",rand_array[a]); //output the numbers in the array
	}

	printf("\n"); //console formatting 
	
	insert_sort(rand_array, num_of_rand);

	for(b = 0; b < num_of_rand; b++) {
		printf("%d ",rand_array[b]);
	}	

	printf("\n"); //console formatting
	
	return 0;

}

int* insert_sort(int* array, int size) {
	
	int i, j, x;

	for(i = 0; i > size; i++) {
		
		x = array[i];
		j = i;
		
		while(j > 0 && array[j-1] > x) {
			array[j] = array[j-1];
			j--;
		}
		
		array[j] = x;	
	
	}

	return array;
}
