#include <iostream>
#include <vector>
 
int findDifference(int num_1, int num_2) {
	int result = num_1 - num_2;
	return result < 0 ? result * -1 : result;
}
  
int mxdiflg(std::vector<std::string> &a1, std::vector<std::string> &a2) {
	if (a1.empty() || a2.empty()) {
		return -1;
	}
      	int maximum = 0;
	std::vector<std::string> max = a1.size() > a2.size() ? a1 : a2;
      	std::vector<std::string> min = a1.size() > a2.size() ? a2 : a1;
	for (auto & item_1 : max) {
        	for (auto & item_2 : min) {
          		int a1 = item_1.std::string::size();
          		int a2 = item_2.std::string::size();
          		maximum = findDifference(a1, a2) > maximum ? findDifference(a1, a2) : maximum;
        	}
      	}
      	return maximum;
}

int main(int argc, const char* argv[]) {
	std::vector<std::string> a1 = {"hoqq", "bbllkw", "oox", "ejjuyyy", "plmiis", "xxxzgpsssa", "xxwwkktt", "znnnnfqknaz", "qqquuhii", "dvvvwz"};
	std::vector<std::string> a2 = {"cccooommaaqqoxii", "gggqaffhhh", "tttoowwwmmww"};
	std::cout << mxdiflg(a1, a2) << std::endl;
}
