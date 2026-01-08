#include <iostream>
#include <vector>

int main() {
	int elements;
	int ans = 0;
	int contains;
	std::cout << "How many elements do you want: ";
	std::cin >> elements;
	std::vector<int> storer(elements);
	for (int i = elements-1 ; i >= 0; i--) {
		std::cout << "\nEnter the element: ";
		std::cin >> storer[i];
	}
	for (int j = elements - 1; j > 0; j--) {
		if (storer[j] > storer[j - 1]) {
			contains = storer[j];
		}
		else {
			contains = storer[j - 1];
		}
	}
	std::cout << contains;
	return 0;
}
