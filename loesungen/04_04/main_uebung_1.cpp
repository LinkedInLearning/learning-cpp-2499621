#include <iostream>

// Übung 1: void Funktion
void ausgabeMeinArray(int array[], int laenge)
{
  for (int i = 0; i < laenge; i++)
  {
    std::cout << "Element " << i << ": " << array[i] << std::endl;
  }
}

int main()
{
  // Aufruf void Funktion (Übung 1)
  int mein_array[3] = {};
  mein_array[0] = 1;
  mein_array[1] = 5;
  mein_array[2] = 9;
  ausgabeMeinArray(mein_array, 3);

  return 0;
}