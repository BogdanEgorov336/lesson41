#include "logic.h"
#include "time.h"
#define STUDENT 5

int main() {
	srand(time(0));

	int group1[STUDENT], group2[STUDENT], group3[STUDENT];

	create_vector_elements(group1, STUDENT);
	create_vector_elements(group2, STUDENT);
	create_vector_elements(group3, STUDENT);

	cout << "Group 1: " << convert_vector_elements_to_string(group1, STUDENT) << endl;
	cout << "Group 2: " << convert_vector_elements_to_string(group2, STUDENT) << endl;
	cout << "Group 3: " << convert_vector_elements_to_string(group3, STUDENT) << endl;

	int avg1 = avg(group1, STUDENT);
	int avg2 = avg(group2, STUDENT);
	int avg3 = avg(group3, STUDENT);

	cout << "The best-score group is: " << compare_groups(avg1, avg2, avg3) << endl;

	system("pause");
	return 0;
}