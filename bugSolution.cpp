#include <iostream>
#include <vector>

int main() {
  std::vector<int> vec;
  vec.reserve(12); // Reserve enough space from the beginning
  for (int i = 0; i < 12; ++i) {
    vec.push_back(i);
  }
  //Or use resize()
  std::vector<int> vec2;
  vec2.resize(12); // Resize the vector to 12 elements, elements initialized to 0
  for(int i = 0; i < 12; i++){
    vec2[i] = i; 
  }

  std::cout << "Efficient vector usage"<< std::endl;
  for (int i = 0; i < vec.size(); ++i) {
    std::cout << vec[i] << " ";
  }
  std::cout << std::endl;

  std::cout << "Efficient vector usage with resize()"<< std::endl;
  for (int i = 0; i < vec2.size(); ++i) {
    std::cout << vec2[i] << " ";
  }
  std::cout << std::endl;
  return 0;
}