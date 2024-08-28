#include <iostream>

int main()
{
  int year;
  bool isLeapYear;

  std::cout << "Enter the year: ";
  std::cin >> year;

  if (year % 4 == 0)
  {
    if (year % 100 == 0 && year % 400 != 0)
    {
      isLeapYear = false;
    }
    else
    {
      isLeapYear = true;
    }
  }
  else
  {
    isLeapYear = false;
  }

  if (isLeapYear)
  {
    std::cout << "The year " << year << " is a leap year.";
  }
  else
  {
    std::cout << "The year " << year << " is not a leap year.";
  }

  return 0;
}