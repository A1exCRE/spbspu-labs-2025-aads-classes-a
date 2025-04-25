#include <iostream>
#include <utility>
#include <algorithm>

int main()
{
  int numPairs = 0;
  std::cin >> numPairs;
  if (!std::cin || numPairs < 0)
  {
    std::cerr << "Invalid number of pairs\n";
    return 1;
  }
  std::pair< int, int > * pairs = nullptr;
  try
  {
    pairs = new std::pair< int, int >[numPairs];
  }
  catch (const std::bad_alloc & e)
  {
    std::cerr << "Out of memory\n";
    return 1;
  }
  for (int i = 0; i < numPairs; ++i)
  {
    int a = 0, b = 0;
    std::cin >> a >> b;
    if (!std::cin)
    {
      std::cerr << "Invalid pair input\n";
      delete[] pairs;
      return 1;
    }
    if (a > b)
    {
      std::swap(a, b);
    }
    pairs[i] = {a, b};
  }
  delete[] pairs;
}
