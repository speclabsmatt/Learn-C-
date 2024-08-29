#include <iostream>

// Define is_palindrome() here:
bool is_palindrome(std::string text) {
  int i = 0;
  int j = text.length() - 1;

  while (i < text.length()) {
    if (text[i] != text[j]) {
      return false;
    }
    i++;
    j--;
  }
  
  return true;
}


int main() {
  
  std::cout << is_palindrome("madam") << "\n";
  std::cout << is_palindrome("ada") << "\n";
  std::cout << is_palindrome("lovelace") << "\n";
  
}