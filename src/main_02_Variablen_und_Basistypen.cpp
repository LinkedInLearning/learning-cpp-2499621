#include <iostream>
#include <limits>

int main()
{
  // Ich bin eine Notiz.
  std::cout << "Hallo, mein Name ist Chris." << std::endl;
  int imin = std::numeric_limits<int>::min(); // minimum value
  int imax = std::numeric_limits<int>::max();

  std::cout << "Min int" << imin << std::endl;
  std::cout << "Max int" << imax << std::endl;

  int fmin = std::numeric_limits<float>::min(); // minimum value
  int fmax = std::numeric_limits<float>::max();

  std::cout << "Min float" << fmin << std::endl;
  std::cout << "Max float" << fmax << std::endl;

  int meine_erste_int_variable = 4;
  int meine_zweite_int_variable = 2;
  int mein_int_ergebnis = meine_erste_int_variable + meine_zweite_int_variable;

  std::cout << "Int Ergebnis: " << mein_int_ergebnis << std::endl;

  float meine_erste_float_variable = 4.8;
  float meine_zweite_float_variable = -2.9;
  float mein_float_ergebnis = meine_erste_float_variable + meine_zweite_float_variable;

  std::cout << "Float Ergebnis: " << mein_float_ergebnis << std::endl;

  double meine_erste_double_variable = 4.8;
  double meine_zweite_double_variable = -2.9;
  double mein_double_ergebnis = meine_erste_double_variable + meine_zweite_double_variable;

  std::cout << "Double Ergebnis: " << mein_double_ergebnis << std::endl;

  bool wahre_variable = true;
  bool falsche_variable = false;

  std::cout << "Wahre Variable: " << wahre_variable << std::endl;
  std::cout << "Falsche Variable: " << falsche_variable << std::endl;

  char mein_zeichen = 'x';

  std::cout << "Meine Char Variable: " << mein_zeichen << std::endl;

  int mein_array [7] = {};

  std::cout << "Mein Array an Index 3: " << mein_array[3] << std::endl;

  mein_array[4] = -9;

  std::cout << "Mein Array an Index 3: " << mein_array[3] << std::endl;
  std::cout << "Mein Array an Index 4: " << mein_array[4] << std::endl;

  return 0;
}