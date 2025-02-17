#include "logic.h"
#include "util.h"

#define MAX_MARK 10
#define MIN_MARK 1


void create_vector_elements(int* vector, int size) {

	for (int i = 0; i < size; i++) {

		vector[i] = rand() % (MAX_MARK - MIN_MARK + 1) + MIN_MARK;
	}
}

string convert_vector_elements_to_string(int* vector, int size) {

	string string_array = "";

	for (int i = 0; i < size; i++) {

		string_array += to_string(vector[i]) + " ";
	}

	return string_array;
}

double avg(int* vector, int size) {

	int sum = 0;

	for (int i = 0; i < size; i++) {

		sum += vector[i];

	}

	return sum / size;
}

int compare_groups(int group1, int group2, int group3) {

	return group1 > group2 && group1 > group3 ? 1
		: group2 > group1 && group2 > group3 ? 2 : 3;
}