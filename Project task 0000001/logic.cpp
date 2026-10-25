#include "logic.h"

int count_even(const int* array, int size) {
	int count = 0;
	for (int i = 0; i < size; ++i) {
		if (array[i] % 2 == 0) ++count;
	}
	 return count;
}
int count_odd(const int* array, int size) {
	int count = 0;
	for (int i = 0; i < size; ++i) {
		if (array[i] % 2 != 0) ++count;
	}
	return count;
}
