#include <iostream>

int main()
{
  int array[5] = {};
  
  for(int index = 0; index < 5; index++){
    array[index] = 3 * index;
    if (array[index] >= 6)
    {
      std::cout << "Array[" << index << "] = " << array[index] << std::endl;
    }
  }

  int variable_1 = 10;
  int variable_2 = 2;

  while (variable_1 >= variable_2)
  {
    variable_1 += 1;
    variable_2 += 2;
    if (variable_2 > variable_1)
    {
      std::cout << "Variable 1: " << variable_1 << "; Variable 2: " << variable_2 << std::endl;
    }
  }
    return 0;
  }
