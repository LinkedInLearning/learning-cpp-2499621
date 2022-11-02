#include <iostream>

char zeichenWandler(int wert)
{
  // Leeres Feld
  if (wert == 0)
  {
    return ' ';
  }
  // Spieler 1 = x
  else if (wert == 1)
  {
    return 'x';
  }
  // Spieler 2 = o
  else
  {
    return 'o';
  }
}

void ausgabeSpielfeld(int array[])
{
  std::cout << zeichenWandler(array[0]) << " | " << zeichenWandler(array[1]) << " | " << zeichenWandler(array[2]) << std::endl;
  std::cout << "----------" << std::endl;
  std::cout << zeichenWandler(array[3]) << " | " << zeichenWandler(array[4]) << " | " << zeichenWandler(array[5]) << std::endl;
  std::cout << "----------" << std::endl;
  std::cout << zeichenWandler(array[6]) << " | " << zeichenWandler(array[7]) << " | " << zeichenWandler(array[8]) << std::endl;
}

bool gewinnabfrage(int array[], int wert)
{
  // Zeilen abfragen
  if ((array[0] == wert) && (array[1] == wert) && (array[2] == wert))
  {
    return true;
  }
  else if ((array[3] == wert) && (array[4] == wert) && (array[5] == wert))
  {
    return true;
  }
  else if ((array[6] == wert) && (array[7] == wert) && (array[8] == wert))
  {
    return true;
  }
  // Spalten abfragen
  else if ((array[0] == wert) && (array[3] == wert) && (array[6] == wert))
  {
    return true;
  }
  else if ((array[1] == wert) && (array[4] == wert) && (array[7] == wert))
  {
    return true;
  }
  else if ((array[2] == wert) && (array[5] == wert) && (array[8] == wert))
  {
    return true;
  }
  // Diagonalen abfragen
  else if ((array[0] == wert) && (array[4] == wert) && (array[8] == wert))
  {
    return true;
  }
  else if ((array[2] == wert) && (array[4] == wert) && (array[6] == wert))
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
  // Intialisieren des Arrays mit 0en zu Beginn
  int array[9] = {};
  bool spiel_fortsetzen = true;

  while (spiel_fortsetzen)
  {
    // Spielzug Spieler 1
    ausgabeSpielfeld(array);

    // Spieler 1 auffordern, sein X zu setzen
    std::cout << "Spieler 1 waehlen Sie ein Feld: ";
    int wahl_1;
    std::cin >> wahl_1;

    // Spieler 1 = Kreuz = Wert 1
    array[wahl_1] = 1;

    // Überprüfen ob Spieler 1 gewonnen hat
    bool sieger_1 = gewinnabfrage(array, 1);
    if (sieger_1)
    {
      std::cout << "Sieger Spieler 1" << std::endl;
      spiel_fortsetzen = false;
    }

    // Spielzug Spieler 2 nur dann wenn Spieler 1 nicht gewonnen hat.
    if (spiel_fortsetzen)
    {
      ausgabeSpielfeld(array);
      std::cout << "Spieler 2 waehlen Sie ein Feld: ";
      int wahl_2;
      std::cin >> wahl_2;

      // Spieler 1 = Kreis = Wert 2
      array[wahl_2] = 2;

      // Überprüfen ob Spieler 2 gewonnen hat
      bool sieger_2 = gewinnabfrage(array, 2);
      if (sieger_2)
      {
        std::cout << "Sieger Spieler 2" << std::endl;
        spiel_fortsetzen = false;
      }
    }
  }

  return 0;
}
