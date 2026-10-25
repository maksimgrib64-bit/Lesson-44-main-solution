#include "logic.h"
int main() {
	int size;
	cout << "Input vector size:";
	cin >> size;

	int* array = new int[size];
	cout << "Input elements:";
	for (int i = 0; i < size; ++i) cin >> array[i];

	cout << "Even:" << count_even(array, size) << endl;
	cout << "Odd:" << count_odd(array, size) << endl;



	return 0;
}