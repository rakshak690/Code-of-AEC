#include <iostream>
#include <string>
using namespace std;

int main() 
{
  string str1 = "Hello";
  string str2 = " World";
  string str3 = str1 + str2;

  cout << str3 << endl;

  return 0;
}


























































/*#include <iostream>
#include <string>

int main() {
  // Reading a string
  std::string str;
  std::cout << "Enter a string: ";
  std::getline(std::cin, str);

  // String concatenation
  std::string str1 = "Hello";
  std::string str2 = " World";
  std::string str3 = str1 + str2;
  std::cout << "String concatenation: " << str3 << std::endl;

  // Accessing a character in a string
  std::cout << "Accessing a character: " << str[0] << std::endl;

  // Replacing a character
  str[0] = 'h';
  std::cout << "After replacing: " << str << std::endl;

  // Finding the size of a string
  std::cout << "Size of string: " << str.length() << std::endl;

  // Reversing a string
  std::string reversedString;
  for (int i = str.length() - 1; i >= 0; i--) {
    reversedString += str[i];
  }
  std::cout << "Reversed string: " << reversedString << std::endl;

  return 0;
}
*/