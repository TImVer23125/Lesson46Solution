#include "util.h"

int main() {
	int array[DEFAULT_SIZE];
	int a, b;

	int size;

	cout << "Input size of array: ";
	cin >> size;
	
	init(array, size, 0, 100);

	print ("Array: ");
	print(convert(array, size));
	return 0;
}