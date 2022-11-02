#include <iostream>

// Übung 2: float Funktion
float berechnung(float parameter_1, float parameter_2)
{
  float erhoeter_param = parameter_2 + 2;

  float resultat = parameter_1 * parameter_2;

  return resultat;
}

int main()
{
  // Aufruf float Funktion (Übung 2)
  float variable_1 = -3.5;
  float variable_2 = 5.1;
  float resultat = berechnung(variable_1, variable_2);
  std::cout << "Resultat der float Funktion ist " << resultat << std::endl;
  
  return 0;
}