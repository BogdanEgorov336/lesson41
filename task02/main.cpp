#include "logic.h"
#define N 5

int main() {

	int matrix[N][N];
	int sum = 0;

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			int element = rand() % 101;

			cout << element << "	";
		}
		cout << endl;
	}

	cout << "Sum of the matrix main line: " 
		<< sum_element_of_main_dagonale(matrix[N][N]) << endl;

	cout << "Sum of the matrix addition line: "
		<< sum_element_of_addition_dagonale(matrix[N][N]) << endl;

	system("pause");
	return 0;
}