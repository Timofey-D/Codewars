#include <iostream>
#include <vector>

int findMax(const std::vector<int>& array) {
        int length = array.size();
        int max = INT16_MIN;
        if (length == 1) {
                return array[0];
        }
        else {
                for (int next = 1; next < length; next++) {
                        if (array[0] > array[next]) {
                                if (array[0] > max) {
                                        max = array[0];
                                }
                        }
                        else if (array[0] < array[next] && array[next] > max) {
                                max = array[next];
                        }
                }
        }
  return max;
}


int main(int argc, const char* argv[]) {
	std::vector<int> numbers = {12, 23, 53, 75, 34, 324};
  	std::vector<int> left = numbers;
  
  	int max = 0;
  	int sum = 0;
  
  	for (int i = 0; i < 3; i++) {
    
    		max = findMax(left);
        
   		sum += max;
    
    		left.clear();
    		numbers.erase(std::remove(numbers.begin(), numbers.end(), max), numbers.end());
    		left = numbers;
    
  	}
	std::cout << sum << std::endl;
  	return 0;
}
