/********************************************************************* 
** Author: Shawn Berg
** Date: 7/26/17
** Description: A fantasy combat game
*********************************************************************/

#include <iostream>
#include "CreatureBase.hpp"
#include "Barbarian.hpp"
#include "Vampire.hpp"
#include "BlueMen.hpp"
#include "Medusa.hpp"
#include "HarryPotter.hpp"
#include "menu.hpp"


using namespace std;

int main()
{
    setSeed(); // set seed for random number generator

    int attackPlayer;
    bool userQuit = false;
    bool player1Ready = false;
    int player1Choice = 0;
    bool player2Ready = false;
    int player2Choice = 0;
    int round;

    CreatureBase* Player1;
    CreatureBase* Player2;


    do switch(menu1())
    {
        {
            case 1: // Fight
                round = 1;
                attackPlayer = randInt(1, 2);

            if (player1Ready == true && player2Ready == true)
            {
                switch (player1Choice)
                {
                    case 1:
                        Player1 = new Barbarian();
                        break;

                    case 2:
                        Player1 = new Vampire();
                        break;

                    case 3:
                        Player1 = new BlueMen();
                        break;

                    case 4:
                        Player1 = new Medusa();
                        break;

                    case 5:
                        Player1 = new HarryPotter();
                        break;
                }

                switch (player2Choice)
                {
                    case 1:
                        Player2 = new Barbarian();

                    case 2:
                        Player2 = new Vampire();
                        break;

                    case 3:
                        Player2 = new BlueMen();
                        break;

                    case 4:
                        Player2 = new Medusa();
                        break;

                    case 5:
                        Player2 = new HarryPotter();
                        break;
                }


                while (Player1->isDead() == false && Player2->isDead() == false)
                {
                    cout << "Round: " << round << endl << endl;

                    cout << "Player 1: " << Player1->getName() << " vs. ";
                    cout << "Player 2: " << Player2->getName() << endl << endl;

                    if (attackPlayer == 1)
                    {
                        Player2->defend(Player1->attack());
                    }

                    if (attackPlayer == 2)
                    {
                        Player1->defend(Player2->attack());
                    }


                    cout << endl;

                    cout << Player1->getName() << " strength remaining: "
                         << Player1->getStrength() << endl;

                    cout << Player2->getName() << " strength remaining: "
                         << Player2->getStrength() << endl;


                    cout << endl;

                    round++;

                    if (attackPlayer == 1)
                    {
                        attackPlayer = 2;
                    }
                    else
                        attackPlayer = 1;
                }

                if (Player1->isDead() == true)
                {
                    cout << "Player 2 and " << Player2->getName() << " win!"
                         << endl << endl;

                    delete Player1;
                    delete Player2;

                    break;
                }
                if (Player2->isDead() == true)
                {
                    cout << "Player 1 and " << Player1->getName() << " win!"
                         << endl << endl;

                    delete Player1;
                    delete Player2;

                    break;
                }
            }

            if (player1Ready == false || player2Ready == false)
            {
                cout << "Choose a combatant for both players!" << endl;
                break;
            }

            case 2: // Select combatant for Player 1
                do switch(menu2())
                {
                    {
                        case 1: // Barbarian
                            player1Choice = 1;
                            player1Ready = true;
                            break;

                        case 2: // Vampire
                            player1Choice = 2;
                            player1Ready = true;
                            break;

                        case 3: // BlueMen
                            player1Choice = 3;
                            player1Ready = true;
                            break;

                        case 4: // Medusa
                            player1Choice = 4;
                            player1Ready = true;
                            break;

                        case 5: // Harry Potter
                            player1Choice = 5;
                            player1Ready = true;
                            break;

                        default:
                            break;
                    }
                }
                while (player1Ready == false);
                break;

            case 3: // Select combatant for Player 2
                do switch(menu2())
                    {
                        {
                            case 1: // Barbarian
                                player2Choice = 1;
                                player2Ready = true;
                                break;

                            case 2: // Vampire
                                player2Choice = 2;
                                player2Ready = true;
                                break;

                            case 3: // BlueMen
                                player2Choice = 3;
                                player2Ready = true;
                                break;

                            case 4: // Medusa
                                player2Choice = 4;
                                player2Ready = true;
                                break;

                            case 5: // Harry Potter
                                player2Choice = 5;
                                player2Ready = true;
                                break;

                            default:
                                break;
                        }
                    }
                while (player2Ready == false);
            break;

            case 4: // Quit
                userQuit = true;
                return 0;

            default:
                break;
        }
    }
    while (userQuit == false);


}
