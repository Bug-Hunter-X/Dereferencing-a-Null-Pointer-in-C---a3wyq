int main() {
  int* ptr = nullptr;
  if (ptr != nullptr) { 
    *ptr = 10; // Dereferencing only if not null
  } else {
    // Handle the null pointer case appropriately
    std::cerr << "Error: Pointer is null" << std::endl;
  }
  return 0;
}