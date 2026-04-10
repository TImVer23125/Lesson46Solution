#include "util.h"
#include "logic.h"

int main() {
	int array[DEFAULT_SIZE];
	int a, b;

	int size;

	cout << "Input size of array: ";
	cin >> size;

	init(array, size, 0, 100);

	print("Array: ");
	print(convert(array, size));

	int max = get_max(array, size);
	int min = get_min(array, size);
	double arithmetical = get_avg(array, size);

	print("\nMax value is " + to_string(max) + ".");
	print("\nMin value is " + to_string(min) + ".");
	print("\n Arithmetical mean is " + to_string(arithmetical) + ".");

	return 0;
}