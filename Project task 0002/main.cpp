#include "logic.h"
int main() {
	int size;
	cout << "Input vector size:";
	cin >> size;

	int* array = new int[size];
	cout << "Input elements:";
	for (int i = 0; i < size; ++i) cin >> array[i];

	if (are_all_same(array, size)) {
		cout << "All elements are same.";
	}
	else {
		cout << "Elements are Not same.";
	}


	return 0;
}