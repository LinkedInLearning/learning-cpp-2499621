#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
  // Aufforderung die auf der Konsole für den User angezeigt wird
  std::cout << "User waehlt Schere (1), Stein (2), Papier(3): ";

  // Einlesen der Eingabe
  int user_eingabe;
  std::cin >> user_eingabe;

  if (user_eingabe == 1)
  {
    std::cout << "Der Spieler hat Schere ausgewaehlt" << std::endl;
  }
  else if (user_eingabe == 2)
  {
    std::cout << "Der Spieler hat Stein ausgewaehlt" << std::endl;
  }
  else
  {
    std::cout << "Der Spieler hat Papier ausgewaehlt" << std::endl;
  }

  // Computer wählt zufällig 1, 2 oder 3
  std::srand(std::time(0));
  // Hinweis: Modulo 3 gibt Ziffern 0,1,2 aus.
  // Wir benötigen aber 1,2,3 deshalb addieren wir +1.
  int computer_wahl = std::rand() % 3 + 1;

  if (computer_wahl == 1)
  {
    std::cout << "Der Computer hat Schere ausgewaehlt" << std::endl;
  }
  else if (computer_wahl == 2)
  {
    std::cout << "Der Computer hat Stein ausgewaehlt" << std::endl;
  }
  else
  {
    std::cout << "Der Computer hat Papier ausgewaehlt" << std::endl;
  }

  // Gewinnabfrage
  if (user_eingabe == computer_wahl)
  {
    std::cout << "Unentschieden." << std::endl;
  }
  // User = Schere, Computer = Stein
  if ((user_eingabe == 1) && (computer_wahl == 2))
  {
    std::cout << "Es gewinnt der Computer." << std::endl;
  }
  // User = Schere, Computer = Papier
  if ((user_eingabe == 1) && (computer_wahl == 3))
  {
    std::cout << "Es gewinnt der Spieler." << std::endl;
  }
  // User = Stein, Computer = Papier
  if ((user_eingabe == 2) && (computer_wahl == 3))
  {
    std::cout << "Es gewinnt der Computer." << std::endl;
  }
  // User = Stein, Computer = Schere
  if ((user_eingabe == 2) && (computer_wahl == 1))
  {
    std::cout << "Es gewinnt der Spieler." << std::endl;
  }
  // User = Papier, Computer = Schere
  if ((user_eingabe == 3) && (computer_wahl == 1))
  {
    std::cout << "Es gewinnt der Computer." << std::endl;
  }
  // User = Papier, Computer = Stein
  if ((user_eingabe == 3) && (computer_wahl == 2))
  {
    std::cout << "Es gewinnt der Spieler." << std::endl;
  }

  return 0;
}