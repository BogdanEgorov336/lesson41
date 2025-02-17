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