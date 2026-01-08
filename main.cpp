#include <iostream>
#include <vector>

int main() {
	int elements;
	int ans = 0;
	int contains;
	std::cout << "How many elements do you want: ";
	std::cin >> elements;
	std::vector<int> storer(elements);
	for (int i = 0; i < elements; i++) {
		std::cout << "\nEnter the element: ";
		std::cin >> storer[i];
		contains = i;
	}
	for (int j = 0; j <= contains; j++) {
		ans = ans + storer[j];
	}
	std::cout << ans;
	return 0;
}