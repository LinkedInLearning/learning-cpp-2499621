#include <iostream>

int main()
{
  // Anlegen des Arrays mit 5 Werten
  int array[5] = {};

  for (int i = 0; i < 5; i++){
    // Zuweisen des 3-fachen Index Wert
    array[i] = i * 3;
    //Überprüfen ob das Element größer gleich 6 ist
    if (array[i] >= 6){
      std::cout << "Element " << i << ": " << array[i] << std::endl;
    }
  }

  return 0;
}