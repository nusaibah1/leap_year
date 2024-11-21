#include <iostream>

  int main() {
  int year;
  std::cout << "Year: "; 
  std::cin >> year;

  // Veryfying user input: 
  if (year < 1000 || year > 9999) {
    std::cout << "Please enter a valid year!/n" << "Year:\n";
    std::cin >> year;
    
} else if (year % 4 == 0 && year % 100 != 0 || year % 400 == 0 ) {
    std::cout << "It's a leap year :)\n";

  } else {
    std::cout << "It is not a leap year :(\n";
  }
  
  
}
