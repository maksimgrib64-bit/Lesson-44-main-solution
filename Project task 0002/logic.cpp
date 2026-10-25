#include "logic.h"
bool are_all_same(const int* array, int size) {
	for (int i = 0; i < size; ++i) {
		if (array[i] != array[0])return false;
	}
	return true;
}