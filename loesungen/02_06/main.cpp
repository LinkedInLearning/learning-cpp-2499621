#include <iostream>

int main()
{
  // anlegen und initialisieren des Arrays mit x
  int mein_array[7] = {};

  // Ausgabe des Wertes an Index 3
  std::cout << "mein_array an Index 3: " << mein_array[3] << std::endl;

  // Zuweisung an Index 4
  mein_array[4] = -9;

  // Ausgabe Index 3 & Index 4
  std::cout << "mein_array an Index 3: " << mein_array[3] << " -- Index 4: " << mein_array[4] << std::endl;

  return 0;
}