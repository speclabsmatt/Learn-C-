#include <iostream>
#include <vector>

// Define first_three_multiples() here:
std::vector<int> first_three_multiples(int num) {
  std::vector<int> first_three;

  for (int i = 1; i < 4; i++) {
    int multiple = num * i;
    first_three.push_back(multiple);
  }

  return first_three;
}



int main() {
  
  for (int element : first_three_multiples(8)) {
    std::cout << element << "\n";
  }
  
}