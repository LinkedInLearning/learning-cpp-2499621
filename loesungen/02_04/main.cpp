#include <iostream>

int main()
{
  // anlegen und initialisieren der wahren Variable
  bool wahre_variable = true;

  // anlegen und initialisieren der falschen Variable
  bool falsche_variable = false;

  std::cout << "Die wahre Variable: " << wahre_variable << std::endl;
  // Der Wert wird als 1 dargestellt, da für den Computer der Wert true
  // bei boolschen Variablen so dargestellt wird.

  std::cout << "Die faslche Variable: " << falsche_variable << std::endl;
  // Der Wert wird als 0 dargestellt, da für den Computer der Wert false
  // mit dem Wert 0 dargestellt wird.

  return 0;
}