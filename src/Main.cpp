#include <iostream>
// using namespace std;

int main()

{
  int array[5] = {};
  for (int i = 0; i <= 4; i++)
  {
    array[i] = i * 3;

    if (array[i] >= 6)
    {
      std::cout << array[i] << std::endl;
    }
  }

  return 0;
}