#include <iostream>
#include <vector>

int findMaxMin(std::vector<int>& array, bool max_min) {
    	int max = INT16_MIN;
    	int min = INT16_MAX;
    	if (array.size() == 1) {
            	return array[0];
	}
	for (int next = 1; next < array.size(); next++) {
		if (array[0] > array[next] && array[next] < min) {
			if (array[0] > max) {
				max = array[0];
			}
			min = array[next];
		}
		else if (array[0] < array[next] && array[next] > max) {
			max = array[next];
			if (array[0] < min) {
				min = array[0];
			}
		}
	}
    	return max_min == true ? max : min;
}

int main(int argc, const char* argv[]) {
	std::vector<int> v;
	v = {12, 15, 10, 7, 11};

    	std::vector<int> result;
    	std::vector<int> left = v;
	
	int max = 0;
   	int min = 0;
  
    	for (int i = 0; !left.empty(); i++) {
            
      		if (left.size() > 1) {
        		max = findMaxMin(left, true);
        		min = findMaxMin(left, false);
      
        		result.push_back(max);
        		result.push_back(min);
      		}
              
      		else {
        		min = findMaxMin(left, false);
        		result.push_back(min);
      		}
              
      		left.clear();
      		int lv = v.size();
      		for (int i = 0; i < lv; i++) {
          		if (v[i] != max && v[i] != min) {
              			left.push_back(v[i]);
          		}
      		}
      		v = left;
        
    	}
 
	for (auto & item : result) {
		std::cout << item << std::endl;
	}
	return 0;
}
