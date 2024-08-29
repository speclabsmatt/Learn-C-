#include <iostream>
#include <vector>

int main()
{
  int evenSum = 0;
  int oddProduct = 0;

  std::vector<int> nums = {2, 4, 3, 6, 1, 9};

  for (int i = 0; i < nums.size(); i++)
  {
    int val = nums[i];

    if (val % 2 == 0)
    {
      evenSum += val;
    }
    else
    {
      if (oddProduct == 0)
      {
        oddProduct = val;
      }
      else
      {
        oddProduct = val * oddProduct;
      }
    }
  }

  std::cout << "Sum of even numbers is " << evenSum << "\n";
  std::cout << "Product of odd numbers " << oddProduct;
}
