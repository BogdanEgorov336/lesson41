#include <iostream>
#define N 5
#define M 10
using namespace std;

int main() {

	int matrix[N][N]{};
	int sum = 0;

	for (int i = 0; i < N; i++) {

		for (int j = 0; j < N; j++) {

			int element = rand() % 101;

			cout << element << "	";

			if (i == j) {
				sum += element;
			}
		}
		cout << endl;
	}

	cout << "Sum of the matrix: " << sum << endl;

	system("pause");
	return 0;
}