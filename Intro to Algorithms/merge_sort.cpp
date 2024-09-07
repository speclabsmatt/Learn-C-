#include <iostream>
#include <vector>

// Function to merge two halves
void merge(std::vector<int> &arr, int left, int mid, int right)
{
  int n1 = mid - left + 1;
  int n2 = right - mid;

  // Create temporary arrays
  std::vector<int> L(n1);
  std::vector<int> R(n2);

  // Copy data to temporary arrays L[] and R[]
  for (int i = 0; i < n1; i++)
    L[i] = arr[left + i];
  for (int j = 0; j < n2; j++)
    R[j] = arr[mid + 1 + j];

  // Merge the temporary arrays back into arr[left..right]
  int i = 0, j = 0, k = left;

  while (i < n1 && j < n2)
  {
    if (L[i] <= R[j])
    {
      arr[k] = L[i];
      i++;
    }
    else
    {
      arr[k] = R[j];
      j++;
    }
    k++;
  }

  // Copy the remaining elements of L[], if any
  while (i < n1)
  {
    arr[k] = L[i];
    i++;
    k++;
  }

  // Copy the remaining elements of R[], if any
  while (j < n2)
  {
    arr[k] = R[j];
    j++;
    k++;
  }
}

// Function to implement merge sort
void mergeSort(std::vector<int> &arr, int left, int right)
{
  if (left < right)
  {
    int mid = left + (right - left) / 2;

    // Recursively sort the first and second halves
    mergeSort(arr, left, mid);
    mergeSort(arr, mid + 1, right);

    // Merge the sorted halves
    merge(arr, left, mid, right);
  }
}

// Function to print an array
void printArray(const std::vector<int> &arr)
{
  for (int i : arr)
    std::cout << i << " ";
  std::cout << std::endl;
}

int main()
{
  // Initial array
  std::vector<int> arr = {1, 12, 11, 13, 5, 6, 7, 15};
  std::cout << "Unsorted array: ";
  printArray(arr);

  mergeSort(arr, 0, arr.size() - 1);

  std::cout << "Sorted array: ";
  printArray(arr);

  return 0;
}