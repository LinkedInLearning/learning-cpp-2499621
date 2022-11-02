#include <iostream>

// Übung 3: bool Funktion
bool vergleich(int parameter_1, int parameter_2, int parameter_3)
{
  if ((parameter_1 < parameter_2) && (parameter_2 < parameter_3))
  {
    return true;
  }
  else
  {
    return false;
  }
}

int main()
{
  // Aufruf bool Funktion (Übung 3)
  int param_1 = 2;
  int param_2 = 3;
  int param_3 = 4;
  bool ergebnis_vergleich = vergleich(param_1, param_2, param_3);
  std::cout << "Ergebnis des Vergleichs ist " << ergebnis_vergleich << std::endl;

  return 0;
}