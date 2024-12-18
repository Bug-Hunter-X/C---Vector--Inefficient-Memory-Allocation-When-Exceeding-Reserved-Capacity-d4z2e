std::vector<int> vec; 
vec.reserve(10); // Reserve space for 10 elements
for (int i = 0; i < 10; ++i) {
  vec.push_back(i); 
}
vec.push_back(10); // This will still work, but it's inefficient
vec.push_back(11); //This will also reallocate memory
vec.resize(12); //This is another way to add element. But is efficient than above