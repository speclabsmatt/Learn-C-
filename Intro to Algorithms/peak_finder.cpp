#include <iostream>
#include <vector>

std::vector<int> getPeaks(std::vector<int> &points)
{
  std::vector<int> peaks;

  for (int i = 1; i < points.size() - 1; i++)
  {
    if (points[i] > points[i + 1] && points[i] > points[i - 1])
    {
      peaks.push_back(points[i]);
    }
  }

  return peaks;
}

int main()
{
  std::vector<int> points = {1, 2, 3, 2, 4, 1, 5, 3};
  std::vector<int> peaks = getPeaks(points);

  for (const int i : peaks)
  {
    std::cout << i;
  }
}