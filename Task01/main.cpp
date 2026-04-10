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
	double arithmetical = calculate_arithmetical_mean(array, size);
	double geometrical = calculate_geometrical_mean(array, size);


	print("\nMax value is " + to_string(max) + ".");
	print("\nMin value is " + to_string(min) + ".");
	print("\n Arithmetical mean is " + to_string(arithmetical) + ".");
	print("\n Geometrical mean is " + to_string(geometrical) + ".");

	swap_extrem_elements(array, size);

	print("\nAfter array: ");
	print(convert(array, size));

	return 0;
}