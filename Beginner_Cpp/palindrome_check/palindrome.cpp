#include <iostream>

std::string is_palindrome(std::string text) {
  std::string reversed_text = "";
  for (int i = text.size() - 1; i >= 0; i--) {
    reversed_text.push_back(text[i]);
  }

  if (text == reversed_text) {
    return "That is a palindrome!";
  }
  else {
    return "Not a palindrome, sucks to suck";
  }
}

int main() {
    std::string palindrome;
    std::cout << "\nEnter your word/sentence to check: ";
    std::cin >> palindrome;
    std::cout << is_palindrome(palindrome) << std::endl;
}