#include <iostream>
#include <vector>

int maxSequence(const std::vector<int>& arr){
  int curr_sum = 0;
  int seq_sum = INT16_MIN;
  int max_sum = 0;
  for (int j = 0; j < arr.size(); j++) {
      curr_sum = 0;
      for (int loop = 0; loop < (j + 1); loop++) {
          for (int i = loop; i < arr.size() - j + loop; i++) {
              curr_sum += arr[i];
          }
          if (curr_sum > seq_sum) {
              seq_sum = curr_sum;
          }
          curr_sum = 0;
      }
      if (seq_sum > max_sum) {
          max_sum = seq_sum;
      }
  }
  return max_sum;
}


int main(int argc, const char* argv[]) {
    std::vector<int> array = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    std::cout << 6 << " " << maxSequence(array) << std::endl;
    return 0;
}

