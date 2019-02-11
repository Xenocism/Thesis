/*
Here we write a simple program to test the hit/miss
behavior of the caches for vpd dump
We want the following exhaustive possibilities:

Hit
Miss
Hit Hit
Hit Miss
Miss Hit
Miss Miss
*/

#include <stdio.h>

#define SIZE 5
uint64_t touch[SIZE] = {0, 1, 2, 3, 4};

int main(void) {

printf("starting:\n");

	// Miss
	touch[0]++;

	// Hit
	touch[0]++;

	// Hit Miss
	touch[0]++;
	touch[1]++;

	// Miss Hit
	touch[2]++;
	touch[1]++;

	// Miss Miss
	touch[3]++;
	touch[4]++;

	// Hit Hit
	touch[3]++;
	touch[4]++;

	printf("m[%p]\n", &touch[0]);

return 0;
}
