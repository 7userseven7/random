#include <iostream>
#include <vector>

int main() {
	int elements;
	std::cin >> elements;
	std::vector<int> array(elements);
	for (int i = 0; i < elements; i++) {
		std::cout << "\nEnter the value of the element: ";
		std::cin >> array[i];
	}
	for (int j = 0; j < elements; j++) {
		if (array[j] % 2 == 0) {
			std::cout << array[j] << "<- even's index is at " << j << std::endl;
		}
		else {
			std::cout << array[j] << " <- odd's index is at " << j << std::endl;
		}
	}
	return 0;
}
