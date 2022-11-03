#include <iostream>

int main()
{
  // Anlegen der Variable mit dem Wert 10
  int var_1 = 10;

  // Anlegen der Variable mit dem Wert 2
  int var_2 = 2;

  while(var_2 <= var_1){
    var_1 = var_1 + 1;
    var_2 = var_2 + 2;
  }

  std::cout << "Variable 1 " << var_1 << std::endl;
  std::cout << "Variable 2 " << var_2 << std::endl;

  return 0;
}