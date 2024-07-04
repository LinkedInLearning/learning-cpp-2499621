#include <iostream>

std::string mapping(int choosen)
{
  std::string word = "";
  switch (choosen)
  {  
    case 1:
      word="Schere";
      break;
    case 2:
      word="Stein";
      break;
    case 3:
      word="Papier";
      break;
  }
  return word;
}

int main()
{
  bool weiterspielen = true;

  while (weiterspielen==true)
  {

    int comp=0;
    int usr=0;
    std::string winner={};

    

    while((usr<1)||(usr>3))
    {
      std::cout << "Wählen Sie zwischen:\n Schere(1)\n Stein(2)\n Papier(3):" << std::endl;
      std::cin>> usr;

      if ((usr < 1)
        || (usr > 3))
        std::cout << "Falsche Eingabe!"<< std::endl;
    }  

    comp = rand() %3 + 1;

    /*  usr  comp result
        1    1    equal
        1    2    comp 
        1    3    usr  
        2    1    usr
        2    2    equal
        2    3    comp
        3    1    comp
        3    2    usr
        3    3    equal 
    */ 
    if(usr==comp)
    {
      winner="Niemand (Unentschieden)";
    }else if((usr == 1 && comp == 3)||
            (usr == 2 && comp == 1)||
            (usr == 3 && comp == 2)){
            winner="der Spieler";
            }
            else{
              winner="der Computer";
            }

    std::cout<< "Der Spieler hat " << mapping(usr) << " ausgewählt." << std::endl;
    std::cout << "Der Computer hat " << mapping(comp) << " ausgewählt." << std::endl;
    std::cout << "Es gewinnt " << winner << std::endl;

    char choice=NULL;
    weiterspielen = NULL;
    std::cout << "Möchten Sie noch einmal spielen? (Drücken Sie 'J' für Ja oder 'N' für Nein): ";
    while (choice != 'N' && choice != 'n' && choice != 'J' && choice != 'j')
    {
      std::cin >> choice;

      if (choice == 'N' || choice == 'n')
      {
        std::cout << "Das Spiel wird beendet." << std::endl;
        weiterspielen=false;
      }
      else if(choice == 'J' || choice == 'j')
      {

        std::cout << "Sie spielen noch einmal" << std::endl;
        weiterspielen=true;
        // ...
      }
      else{
        weiterspielen=NULL;
      }
  }
  }
  return 0;
}