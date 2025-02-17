#include <iostream>
#define N 5
using namespace std;

int sum_element_of_main_dagonale(int matrix[N][N]) {

	int sum = 0;

	for (int i = 0; i < N; i++) {

		sum += matrix[i][i];
	}

	return sum;
}

int sum_element_of_addition_dagonale(int matrix[N][N]) {

	int sum = 0;

	for (int i = 0; i < N; i++) {

		sum += matrix[i][N - 1 - i];
	}

	return sum;
}