#include <iostream>
#include <vector>

int main() {
	int elements;
	std::cout << "How many elemens do you need: ";
	std::cin >> elements;

	std::vector<int>array(elements);
	for (int i = 0; i < elements; i++) {
		std::cout << "\nGive the Element a value of an natural number: ";
		std::cin >> array[i];
	}
	int additional;
	int checker;
	int index;
	std::cout << "\nWhich number do yo want to check if it's in the array: ";
	std::cin >> checker;
	for (int j = 0; j < elements; j++) {
		if (array[j] != checker) {
			continue;
		}
		else {
			index = j;
			for (int k = 0; k < elements; k++) {
				if (array[j] == array[k] && j != k) {
					index = k;
					std::cout << "same number found at index: " << index << std::endl;
				}
			}
		}
	}
	std::cout << "\n\nNumber not found at any of these indexes";
	return 0;
}
