#include <iostream>
#include <vector>
#include <algorithm>

int main(int argc, const char* argv[]) {
	std::vector<int> numbers = {23, 3, 76, 5, 43};
  	std::sort(numbers.begin(), numbers.end());
  	int max = 0;
  	for (int pos = numbers.size() - 1; pos >= 1; pos--) {
    		int current = numbers[pos] - numbers[pos - 1];
    		if (current > max) {
      			max = current;
    		}
  	}
	std::cout << max << std::endl;
  	return 0;
}
