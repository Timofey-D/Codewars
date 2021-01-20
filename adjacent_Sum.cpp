#include <iostream>
#include <vector>

int main(int argc, const char* argv[]) {
	std::vector<int> inputArray = {13, 43, 754, 234, 876, 34, 65, 87};
        int max = INT16_MIN;
        for (int i = 1; i < inputArray.size(); i++) {
          int current = inputArray[i - 1] * inputArray[i];
          if (current > max) {
            max = current;
          }
        }
	std::cout << max << std::endl;
        return 0;
}
