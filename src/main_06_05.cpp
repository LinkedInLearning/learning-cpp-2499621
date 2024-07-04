#include <iostream>

char zeichenWandler(int in)
{
  char out=' ';
  switch (in)
  {
  case 1:
    out='X';
    break;
  case 2: 
    out='O';
    break;
  default:
    out=' ';
    break;
  }
  return out;
}

void ausgabeSpielfeld(int array[])
{
  std::cout << zeichenWandler(array[0]) << " | " << zeichenWandler(array[1]) << " | " << zeichenWandler(array[2]) << std::endl;
  std::cout << "---------" << std::endl;
  std::cout << zeichenWandler(array[3]) << " | " << zeichenWandler(array[4]) << " | " << zeichenWandler(array[5]) << std::endl;
  std::cout << "---------" << std::endl;
  std::cout << zeichenWandler(array[6]) << " | " << zeichenWandler(array[7]) << " | " << zeichenWandler(array[8]) << std::endl;
}

bool gameOver(int array[],int spieler)
{
  if ((array[0] == spieler && array[1] == spieler && array[2] == spieler) ||
      (array[3] == spieler && array[4] == spieler && array[5] == spieler) ||
      (array[6] == spieler && array[7] == spieler && array[8] == spieler) ||
      (array[0] == spieler && array[3] == spieler && array[6] == spieler) ||
      (array[1] == spieler && array[4] == spieler && array[7] == spieler) ||
      (array[2] == spieler && array[5] == spieler && array[8] == spieler) ||
      (array[0] == spieler && array[4] == spieler && array[8] == spieler) ||
      (array[2] == spieler && array[4] == spieler && array[6] == spieler)){
        std::cout << "Spieler " << spieler << " hat gewonnen!" << std::endl;
        std::cout << "Game Over!" << std::endl;
        return true; 
      }else{
        return false;
      }
}

void eingabeprüfung(int* array, int spieler)
{
  int feld;
  bool eingabe_gueltig=false;
  while(eingabe_gueltig==false)
  {
    std::cout << "Spieler " << spieler << ", bitte wähle ein freies Feld (0-8): ";
    std::cin >> feld;

    if (array[feld] != 1 && array[feld] != 2 && feld>=0 && feld<=8)
    {
      // Eingabe gültig
      array[feld]=spieler;
      eingabe_gueltig=true;
    }else{
      eingabe_gueltig = false;
      std::cout << "Eingabe war nicht gültig! Feld ist bereits besetzt oder Eingabe außerhalb des Spielfeldes! " << std::endl;
    }
  }
  

}

int togglespieler(int spieler){
  switch (spieler)
  {
  case 1:
    return 2;
    break;
  case 2:
    return 1;
     break;
  default:
    return 1;
    break;
  }

}

int main()
{
  int array[9]={0,0,0,0,0,0,0,0,0};

  bool gameover=false;

  int spieler=1;

  while (gameover==false)
  {
    eingabeprüfung(array,spieler);
    ausgabeSpielfeld(array);
    gameover=gameOver(array,spieler);
    spieler = togglespieler(spieler);
  }

  return 0;
}